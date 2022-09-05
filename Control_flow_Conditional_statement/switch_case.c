#include<stdio.h>
int main()
{
int num1,num2;
char op;
scanf("%d %c %d",&num1,&op,&num2);
int result;
switch(op){
case '+':
    printf("%d\n",num1+num2);
    break;

case '-':
    printf("%d\n",num1-num2);
    break;

case '*':
    printf("%d\n",num1*num2);
    break;

case '/':
    printf("%d\n",num1/num2);
    break;
default:
    printf("unknown operator\n");
    break;

}

    return 0;
}
/*
number operator number
8+3
8-3
8*2
10/2

*/
