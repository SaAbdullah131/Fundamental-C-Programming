#include<stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;

};
void print_struct(struct student a){
printf("%s %d %d\n",a.name,a.roll,a.marks);

}

void fun(struct student *st){
    // (*st).marks=100;
    st->marks=100;
}

int main()
{
struct student a={"Rakib",21,82};
fun(&a);
print_struct(a);
return 0;

}
