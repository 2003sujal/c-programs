#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Student {
int rollNo;
char name[50];
char address[100];
float marks;
};
bool isPassed(float marks) {
return marks >= 40.0;
}
void displayPassedStudents(struct Student students[], int numStudents) {
printf("Passed Students:\n");
for (int i = 0; i < numStudents; i++) {
if (isPassed(students[i].marks)) {
printf("roll No: %d\n", students[i].rollNo);
printf("name: %s\n", students[i].name);
printf("address: %s\n", students[i].address);
printf("marks: %f\n", students[i].marks);
}
}
}
int main() {
int numStudents;
printf("Enter the number of students: ");
scanf("%d", &numStudents);
struct Student students[numStudents];
for (int i = 0; i < numStudents; i++) {
printf("\nEnter details for student %d:\n", i + 1);
printf("Roll No: ");
scanf("%d", &students[i].rollNo);
printf("Name: ");
scanf(" %[^\n]", students[i].name);
printf("Address: ");
scanf(" %[^\n]", students[i].address);
printf("Marks: ");
scanf("%f", &students[i].marks);
}
displayPassedStudents(students, numStudents);
return 0;
}
