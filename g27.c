/*Athul, a supermarket employee, needs a program to calculate Goods and Services Tax (GST) deductions for customer purchases. The program should take a purchase code (A to F) and amount, apply the relevant GST rate, subtract it from the original amount, and print the result. 



The user's total amount and product code are used to calculate the GST.







For example, if the amount is 100.00 and the product code is 'C', 5% GST is applied, and the amount is calculated as 100.00 - (100.00*0.05) which is equal to 95.00.

Input format :
The first line of input consists of a character representing the product code ('A', 'B', 'C', 'D', 'E', or 'F').

The second line consists of a float value T, representing the total amount.

Output format :
If the code is valid ('A', 'B', 'C', 'D', 'E', or 'F'), the output displays a float value representing the amount after deducting GST, rounded off to two decimal places, after applying the appropriate GST deduction.

If the code is invalid, it displays "Invalid choice".*/

#include <stdio.h>

int main() {
    float amount, gst;
    char code;

    scanf("%c", &code);

    switch (code) {
        case 'A':
            scanf("%f", &amount);
            printf("%.2f", amount);
            return 0;

        case 'B':
            scanf("%f", &amount);
            gst = amount * 0.02;
            amount = amount - gst;
            printf("%.2f", amount);
            return 0;

        case 'C':
            scanf("%f", &amount);
            gst = amount * 0.05;
            amount = amount - gst;
            printf("%.2f", amount);
            return 0;

        case 'D':
            scanf("%f", &amount);
            gst = amount * 0.12;
            amount = amount - gst;
            printf("%.2f", amount);
            return 0;

        case 'E':
            scanf("%f", &amount);
            gst = amount * 0.18;
            amount = amount - gst;
            printf("%.2f", amount);
            return 0;

        case 'F':
            scanf("%f", &amount);
            gst = amount * 0.28;
            amount = amount - gst;
            printf("%.2f", amount);
            return 0;

        default:
            printf("Invalid choice");
            return 0;
    }
}


