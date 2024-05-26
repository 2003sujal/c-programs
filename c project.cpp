// simple student database management system.
#include<stdio.h>
#include <conio.h>
//function creation
void addstudent();
void studentrecord();
void searchstudent();
void del();

struct student{
	char first_name [20];
	char last_name [20];
	int roll_no;
	char Class[10];
	char vill[20];
	float per;
};


int main()
{
int choice;
while(choice!=5){
printf("\t\t\t=====STUDENT DATABASE MANAGEMENT SYSTEM=====");
printf("\n\n\n\t\t\t\t 1. Add Student Record\n");
printf("\t\t\t\t 2. Student Records\n");
printf("\t\t\t\t 3. Search Student\n");
printf("\t\t\t\t 4. Delete Record\n");
printf("\t\t\t\t 5. Exit\n"); 
printf("\t\t\t\t ___________________________________\n");
printf("\t\t\t\t");
scanf("%d", &choice);
switch(choice){

case 1:
addstudent();
break;

case 2:
studentrecord();
printf("\t\t\t\t Press any key to exit\n");
break;

case 3: 
	searchstudent();
	printf("\n\t\t\t Press any key to exit\n");
	break;
	
	case 4: 
	del();
	printf("\n\t\t\t Press any key to exit\n");
	break;
	   
	   
	   
	case 5:
			printf("\n\t\t\t thank you for using this software \n\n");
			break;
			
	default:
		printf("\n\t\t\t Enter a valid number\n\n");
		printf("\n\t\t\t Press any key to continue......\n");
		
	
}
}
}   
void addstudent(){
char another;
FILE *fp;
struct student info;
do{
	
printf("\t\t\t\t======Add Student info======\n\n\n");

printf("\n\t\t Enter your first name : ");
scanf("%s,&info.first_name");
printf("\n\t\t Enter your last name : ");
scanf("%s,&info.last_name");
printf("\n\t\t Enter roll no: ");
scanf("%s,&info.roll_no");
printf("\n\t\t Enter class ");
scanf("%s,&info.Class");
printf("\n\t\t Enter address: ");
scanf("%s,&info.vill");
printf("\n\t\t Enter percentage ");
scanf("%s,&info.per");
printf("\n\t\t\t_______________________\n");

if (fp==NULL){
	fprintf(stderr,"\t\t\t Can't open file");
}
else {
	printf("\t\t\t Record stored successfully\n");
}
fwrite(&info,sizeof(struct student),1,fp);
fclose(fp);

 printf("\t \t \t do you want to add another record?(y/n):");
 scanf("%s",&another);
}
while(another =='y'|| another=='Y');
}

void studentrecord()
{
	FILE *fp;
	struct student info;
	fp=fopen("student_info.txt","r");
	printf("\t\t\t\t====== Student records======\n\n\n");

	if(fp==NULL){
		fprintf(stderr,"\t\t\t\t Can't open file\n'");
	}else {
		printf("\t\t\t\t Records\n");
		printf("\n\t\t\t_______________________\n");	 
		   }
while(fread(&info,sizeof(struct student),1,fp)){
	printf("\n\t\t\t\t Student name:",info.first_name,info.last_name);
	printf("\n\t\t\t\t Roll no:",info.roll_no);
	printf("\n\t\t\t\t Address:",info.Class);
	printf("\n\t\t\t\t Percentage:",info.vill);
	printf("\n\t\t\t\t Student name:",info.per);
		printf("\n\t\t\t_____________________________\n");	 	
}
fclose(fp);
}


void searchstudent(){
FILE *fp;
struct student info;
int roll_no, found=0;
fp=fopen("student_info","r");
printf("\t\t\t\t======Search Student======\n\n\n");
printf("\t\t\tEnter roll no : ");
scanf("%d", &roll_no);

while(fread(&info, sizeof(struct student),1, fp)){
if(info.roll_no==roll_no){
found=1;
printf("\n\t\t\t\tStudent name: %s %s", info.first_name, info.last_name);
printf("\n\t\t\t\tRoll no: %d",info.roll_no);
printf("\n\t\t\t\tClass :%s",info.Class);
printf("\n\t\t\t\tAddress: %s",info.vill);
printf("\n\t\t\t\tPercentage: %f",info.per);
printf("\n\t\t\t\t_______________________\n");
}
}
if(!found) {
printf("\t\t\tRecord not found");
}
fclose(fp);
}

void del(){
FILE *fp,*fp1;
struct student info;
int roll_no, found=0;
printf("\t\t\t\t======Search Student Record======\n\n\n");
fp=fopen("student_info","r");
fp=fopen("temp.txt", "w");
printf("\t\t\tEnter roll no : ");
scanf("%d", &roll_no);
if(fp==NULL){
fprintf(stderr, "\t\t\t\tcan't open file\n");
}
while(fread(&info, sizeof(struct student),1,fp)){
if(info.roll_no==roll_no){
found=1;
}
else{
	fwrite(&info,sizeof(struct student),1,fp1);
}
fclose(fp);
fclose(fp1);

if(found) {
remove("student_info");
rename("temp.txt","student_info");
printf("\n\t\t\tRecord deleted successfully\n");
}
if(!found){
printf("\\n\t\t\tRecord not found\n");
}
}
}





