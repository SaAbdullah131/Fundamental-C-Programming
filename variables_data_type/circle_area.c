/** Write a program to find the perimeter and area of circle
the program will ask for a radius from the user and then print the perimeter and area

sample interaction:
    enter radius: 1
    perimeter: 6.28
    Area;3.14

    perimeter =2*pi*r;
    Area=pi*r^2;

**/
#include<stdio.h>
int main()
{
    printf("Enter Radius: \n");
    double radius;
   const double PI=3.1416; // constant variable name write in uppercase
   // PI=3; constant ,so it's not changeable.
    scanf("%lf",&radius);

    double perimeter =2*PI*radius;
    printf("Perimeter = %.2lf\n",perimeter);

    double area=PI*radius*radius;
    printf("Area = %.2lf\n",area);


return 0;
}

