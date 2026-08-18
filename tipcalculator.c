#include <stdio.h>

int main(){

double billamount,totalbill, tipamount, tippercent;
printf("Enter the billamount:\n");
scanf("%lf", &billamount);
printf("Enter the tip in percent:\n");
scanf("%lf", &tippercent);
tipamount = billamount * (tippercent/100);
printf("Tip = $%.2lf\n", tipamount);
totalbill = billamount + tipamount;
printf("The total bill $%.2lf", totalbill);

return 0;

}