#include <stdio.h>

int main(){
// Declarations
int a;              //variable declaration
int b;              // ""
int c;              // ""

// Assign values to variables
a = 5;
b = 10;

// Expression and assigment
c = a+ b;       // Expression 'a + b' is evaluated, result assigned to 'c'

// Relational expression
int result = (a > 5);  // relational expression 'a > 5' evaluate to 0 or 1
//1, assigned to 'result'

// print results
printf("a = %d\n", a);     // Output: a = 5
printf("b = %d\n", b);
printf("c = a + b = %d\n", c);
printf("a > 5 evaluates to: %d\n", result);  //output a > 5 evaluates to 
return 0;// End of program

}