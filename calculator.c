#include <stdio.h>

int main() {

double billamount, totalbill, tipamount, tipPercent;
int choice;
double num1, num2, result;
char operator;


printf("Welcome to the Tip and Basic Math Calculator Program.\n");

while (1) {
printf("\n");
printf("Tip Calculator: 1\n");
printf("Math Calculator: 2\n");
printf("Exit: 3\n");
printf("\n");
printf("Enter your choice: ");

//Iput Validation for menu choice
while(scanf("%d", &choice) != 1) {
    printf("Invalid input. Please enter a number.\n");
    while(getchar() != '\n'); // clear input buffer
    printf("Enter your choice: ");
}
 
   
switch (choice) {
case 1:
    // Tip Calculator
 printf("Enter the bill amount: ");
 while(scanf("%lf", &billamount) != 1 || billamount < 0) {
 printf("Invalid input. Please enter a valid positive number for the bill amount");
 while(getchar()!= '\n');  //clear input buffer
} 

printf("Enter tip percent: ");
while(scanf("%lf", &tipPercent) !=1 || tipPercent < 0) {
    printf("Invalid input. Please enter a valid positive number for the tip amount");
    while(getchar() != '\n'); //clear input buffer
}

tipamount = billamount * (tipPercent / 100);
totalbill = billamount + tipamount;

printf("Tip amount: %.2f\n", tipamount);
printf("Total bill: $%.2f\n", totalbill);
break;

case 2:
//Basic Math Calculator
printf("Enter the first number: ");
while (scanf("%lf", &num1) != 1) {
    printf("Invalid input. Please enter a valid number: ");
    while (getchar() != '\n'); //clear input buffer
}

printf("Enter an operator(+, -, *, /): ");
while(scanf(" %c", &operator) != 1 || (operator != '+' && operator != '-' && operator != '*' && operator != '/')) {
    printf("Invalid input. Please enter a valid operator: ");
    while (getchar() != '\n'); //clear input buffer
}
printf("Enter the second number: ");
while(scanf("%lf", &num2) != 1 || (operator == '/' && num2 == 0)) {
    if (operator == '/' && num2 == 0) {
    printf("Error: Division by zero is not allowed. Please enter a non-zero number:  ");
    }else{
        printf("Invalid input. Please enter a valid number: ");
    }
    while (getchar() != '\n'); //clear input buffer
}

switch(operator){

    case ('+'): printf("Result:  %.2lf\n", num1 + num2);
               break;

    case ('-'): printf("Result:  %.2lf\n", num1 - num2);
                break;

    case ('*'):  printf("Result: %.2lf\n", num1 * num2);
                break;

    case ('/'): if (num2 != 0.0)
                printf("Result: %.2lf\n", (num1 / num2));
                else
                    printf("error:Invalid: cannot divide by 0.0!\n");
                break;

    default:    printf("Invalid operator. Please enter one of the following operators *, /, +, _\n");
                printf("Enter a valid operator. \n");               
}
    break;

    case 3:
        printf("Exiting the program. Goodbye!!\n");
        return 0;

    default:
        printf("Invalid choice. Please select a valid option.\n");

}
}
    return 0;
}
   


