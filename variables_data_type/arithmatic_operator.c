#include<stdio.h>
int main(){
int num1,num2;
scanf("%d %d",&num1,&num2);
int addition=num1+num2;
int substraction =num1-num2;
int Mulitiplication = num1 * num2;
double divided =num1/num2;
int modulus= num1% num2;

printf("%d + %d = %d \n",num1,num2,addition);
printf("%d - %d = %d \n",num1,num2,substraction);
printf("%d * %d = %d \n",num1,num2,Mulitiplication);
printf("%d / %d = %d \n",num1,num2,divided);
printf("%d %% %d = %d \n",num1,num2,modulus);


return 0;
}
