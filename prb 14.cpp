#include<stdio.h>
int main(){
double celsius,farenheit;
printf("enter the temperature in celsius:");
scanf("%lf\n",&celsius);

farenheit=((celsius*(9.0/5.0))+32);
printf("%lf\n",farenheit);
return 0;
}