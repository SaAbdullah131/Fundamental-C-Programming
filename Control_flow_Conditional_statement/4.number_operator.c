#include<stdio.h>
int main(){
int a,b;
char op;
scanf("%d %c %d",&a,&op,&b);
if(b==0){
    printf("Can't divided by zero.");
}
else if(op=='+'){
    printf("%d + %d = %d\n",a,b,a+b);
}
else if (op=='-'){
    printf("%d - %d =%d\n",a,b,a-b);
}

else if (op=='*'){
    printf("%d * %d =%d\n",a,b,a*b);
}

else if (op=='/'){
    printf("%d / %d =%d\n",a,b,a/b);
}

else if (op =='%'){
    printf("%d %% %d =%d\n",a,b,a%b);
}


return 0;

}
