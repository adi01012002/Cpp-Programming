// #include <bits/stdc++.h>

// // Define the structure
// struct student
// {
//     int r_no;        // Roll number
//     char name[20];   // Name => This member variable is an array of characters that will store the name of the student, with a maximum length of 19 characters (plus one for the null terminator).
//     char course[20]; // Course => Note that this can lead to buffer overflow if the input exceeds 19 characters.
//     float fee;       // Fee
// };

// int main()
// {
//     struct student st1;
//     scanf("%19s", st1.name);  //%s is called format specifier ,"%19s" limit the input size
//     scanf("%d", &st1.r_no);
//     scanf("%s", st1.course);  //  Use fgets() instead of scanf() for reading strings to prevent buffer overflow.
//     scanf("%f", &st1.fee);
//     printf("%s\n", st1.name);
//     printf("%d\n", st1.r_no);
//     printf("%s", st1.course);
//     printf("%f\n", st1.fee);
// }

#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    char course[20];
    float fee;
};
// struct Student // Structure declaration do not allocate any memory or consume storage space.
// {              // it is just give template that convey to C compiler how structure laid out in the memory and gives details of member name.
//     int roll;  // Each var-name declared within structure is called member of structure
//     char name[20];
//     char course[20];
//     float fee;
// } st1 = {17, "Aditya", "B-tech", 128};

int main()
{
    struct Student st1;      // st1 variable of student type because student is a datatype  As Structure is user defined data type
    scanf("%s",st1.name);   // Like any other data type , memory is allocated when we declare a varible for structure
    scanf("%d",&st1.roll);
    scanf("%s",st1.course);
    scanf("%f",&st1.fee);
    printf("My name is : %s\n", st1.name);
    printf("My roll No : %d\n", st1.roll);
    printf("My Course is : %s\n", st1.course);
    printf("My Fee is : %f", st1.fee);
}