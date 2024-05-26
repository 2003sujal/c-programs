#include<stdio.h>
//structure is defined above all functions so it is global.
struct student
{
char name[20];
int roll_no;
int marks;
};

void printstruct(struct student stu);//declare
int main()
{

struct student stu={"Tim", 1, 78};
printstruct(stu);//call
return 0;
}
void printstruct (struct student stu)//define
{
	printf("Name: %s\n", stu.name); printf("Roll no: %d\n", stu.roll_no); printf("Marks: %d\n",stu.marks); printf("\n");}
