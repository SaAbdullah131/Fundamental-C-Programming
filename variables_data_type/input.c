#include<stdio.h>
int main(){
    // take input from user scanf function use for it.
int english_marks;
int math_marks;

printf("Enter English Marks: \n"); // prompt use for understand
scanf("%d",&english_marks); // take  input from user;

printf("Enter Math Marks: \n");
scanf("%d",&math_marks);
// take two input in same line
/*
scanf("%d %d ",&english_marks,&math_marks
      */
int total = english_marks+math_marks;
printf("Total Marks: %d \n",total);


return 0;

}
