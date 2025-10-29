#include <stdio.h>

int main() {
    float num1, num2;
    int choice, again;
    int check1, check2;

    do {
        printf("---------- Simple Calculator ----------\n");

        printf("Enter first number: ");
        check1 = scanf("%f", &num1);

        printf("Enter second number: ");
        check2 = scanf("%f", &num2);

        if (check1 != 1 || check2 != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            printf("Thank you!\n");
            return 0;
        }

        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        check1 = scanf("%d", &choice);

       
        if (check1 != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            printf("Thank you!\n");
            return 0;
        }

        if (choice == 5) {
            printf("Exiting calculator.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero not allowed!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        check1 = scanf("%d", &again);

        if (check1 != 1) {
            printf("Invalid input! Please enter 1 or 0 only.\n");
            printf("Thank you!\n");
            return 0;
        }

        if (again == 0) {
            printf("Thank you!\n");
        }

    } while (again == 1);

    return 0;
}
