/*
 * File    : basic_calculator.c
 * Author  : Arda
 * Created : 22.01.2026
 * Desc    : Basic calculator.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number1, number2;
    char op;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        printf("\n----------------------------------------------------");
        printf("\n                  BASIC CALCULATOR                  ");
        printf("\n                                             BY Arda");
        printf("\n----------------------------------------------------");
        
        printf("\nWrite your first number: ");
        scanf("%f", &number1);

        printf("Enter your operator (+ - / *):");
        scanf(" %c", &op);

        printf("Enter your second number: ");
        scanf(" %f", &number2);

        switch (op)
        {

        case '+':
            printf("\nResult: %.2f", number1 + number2);
            break;
        case '-':
            printf("\nResult: %.2f", number1 - number2);
            break;
        case '*':
            printf("\nResult: %.2f", number1 * number2);
            break;
        case '/':
            if (number2 != 0)
                printf("\nResult: %.2f", number1 / number2);
            else
                printf("Division by zero is undefined.");
            break;

        default:
            printf("İnvalid Operator! it's just a basic calculator.");
            break;
        }
        printf("\nDo you want to continue (y, n ): ");
            scanf(" %c",&choice);

    }
    printf("\nCalculator Closed.");

    return 0;
}