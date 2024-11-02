import java.util.Scanner;

public class AverageCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size = scanner.nextInt();
        int[] array = new int[size];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            try {
                array[i] = scanner.nextInt();
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please enter an integer.");
                i--;
                scanner.nextLine(); // consume the invalid input
            }
        }
        scanner.close();
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        double average = (double) sum / size;
        System.out.println("The average of the elements is: " + average);
    }
}