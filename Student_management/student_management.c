#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for a student
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

// Function prototypes
void addStudent();
void viewStudents();
void searchStudent();
void deleteStudent();

const char *filename = "student.txt";

int main() {
    int choice;

    while (1) {
        printf("\n=== Student Record Management System ===\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to add a student
void addStudent() {
    struct Student student;
    FILE *file = fopen(filename, "ab");

    if (!file) {
        perror("Unable to open file");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    printf("Enter name: ");
    scanf(" %[^\n]", student.name);  // Read string with spaces
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);

    printf("Student record added successfully.\n");
}

// Function to view all students
void viewStudents() {
    struct Student student;
    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Unable to open file");
        return;
    }

    printf("\n--- All Student Records ---\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Roll No: %d\n", student.rollNo);
        printf("Name: %s\n", student.name);
        printf("Age: %d\n", student.age);
        printf("Marks: %.2f\n", student.marks);
        printf("--------------------------\n");
    }

    fclose(file);
}

// Function to search for a student
void searchStudent() {
    struct Student student;
    int rollNo;
    int found = 0;

    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    printf("Enter roll number to search: ");
    scanf("%d", &rollNo);

    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.rollNo == rollNo) {
            printf("\nStudent Found:\n");
            printf("Roll No: %d\n", student.rollNo);
            printf("Name: %s\n", student.name);
            printf("Age: %d\n", student.age);
            printf("Marks: %.2f\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", rollNo);
    }

    fclose(file);
}

// Function to delete a student record
void deleteStudent() {
    struct Student student;
    int rollNo;
    int found = 0;

    FILE *file = fopen(filename, "rb");
    FILE *tempFile = fopen("temp.txt", "wb");

    if (!file || !tempFile) {
        perror("Unable to open file");
        return;
    }

    printf("Enter roll number to delete: ");
    scanf("%d", &rollNo);

    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.rollNo == rollNo) {
            printf("Deleting record for roll number %d.\n", rollNo);
            found = 1;
        } else {
            fwrite(&student, sizeof(struct Student), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(filename);
    rename("temp.txt", filename);

    if (found) {
        printf("Student record deleted successfully.\n");
    } else {
        printf("Student with roll number %d not found.\n", rollNo);
    }
}

