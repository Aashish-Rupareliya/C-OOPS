#include <stdio.h>

// Function prototypes
void displayMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else if (choice >= 1 && choice <= 4) {
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    printf("The result of addition is: %.2f\n", result);
                    break;
                case 2:
                    result = subtract(num1, num2);
                    printf("The result of subtraction is: %.2f\n", result);
                    break;
                case 3:
                    result = multiply(num1, num2);
                    printf("The result of multiplication is: %.2f\n", result);
                    break;
                case 4:
                    result = divide(num1, num2);
                    if (result != 0) {
                        printf("The result of division is: %.2f\n", result);
                    } else {
                        printf("Error! Division by zero.\n");
                    }
                    break;
                default:
                    printf("Invalid choice. Please select a valid option from the menu.\n");
            }
        } else {
            printf("Invalid choice. Please select a valid option from the menu.\n");
        }
    }

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}
