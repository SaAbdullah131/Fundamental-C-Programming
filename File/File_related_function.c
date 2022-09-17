#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile=fopen("input.txt","r");
    while(1){
        char c=fgetc(inputFile);
        if(c==EOF){
            break;
        }

        printf("%c",c);
    }


    return 0;
}
