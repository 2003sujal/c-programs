#include<stdio.h>
struct student{
	char name[20];
	int roll ;
};
struct add{
	char address[20];
	struct student s[3];
	
};
struct hostel{
	int num;
	struct add a[3];
};
main ()
{
	int i;
struct hostel b[3];
for(i=0;i<3;i++)
{
	printf("enter name  ");
	scanf("%s",&b[i].a[i].s[i].name);
		printf("enter roll  ");
	scanf("%d",&b[i].a[i].s[i].roll);
		printf("enter adrres  ");
	scanf("%s",&b[i].a[i].address);
		printf("enter hostel ");
	scanf("%d",&b[i].num);
}
printf("name\t roll\t address\t hostel\n ");
	
for(i=0;i<3;i++)
{
	printf("%s\t %d\t %s\t\t %d\n",b[i].a[i].s[i].name,b[i].a[i].s[i].roll,b[i].a[i].address,b[i].num);
	}	
	
	

	
}
