#include<stdio.h>

struct student {
char name[100];
int roll;
int marks;
};
void print_struct(struct student a)
{
printf("%s %d %d",a.name,a.roll,a.marks);

}
int main(){
 struct student a[5];
 for(int i=0;i<5;i++)
 {
     scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);
 }
// print
for(int i=0;i<5;i++)
{
    print_struct(a[i]);
}

return 0;
}
