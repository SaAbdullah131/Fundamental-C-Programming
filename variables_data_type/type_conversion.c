// type conversion in c programming.. it's called type casting.
#include<stdio.h>
int main(){

double RealNumber=10.5;
int number = RealNumber; // number show just 10..here Implicit conversion .

printf("Number is : %d , RealNumber is: %lf\n",number,RealNumber);

double num=10.66;
printf("double number is: %lf\n",num);
printf("Explicit type casting part is integer: %d\n",(int)num);// Explicit type casting

int number1=20,number2=8;

double  vagfol = (double) number1/ (double )number2; // Explicit type casting
printf("%d / %d is : %lf\n",number1,number2,vagfol);
return 0;
}
