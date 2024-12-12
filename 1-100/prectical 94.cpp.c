#include <stdio.h>
#include <conio.h>
struct student 
{
char name, enrollment,branch, semester;
};
struct student s;
//prectical 94
void main()
 {
  clrscr();
  printf("Enter student name  =");
  scanf("%s",&s.name);
  printf("Enter Enrollment number =");
  scanf("%s",&s.enrollment);
  printf("Enter Branch  =");
  scanf("%s",&s.branch);
  printf("Enter semester =");
  scanf("%s",&s.semester);
  printf("Student name = %s",s.name);
  printf("Enrollment number= %s",s.enrollment);
  printf("Branch = %s",s.branch);  
  printf("Semester = %s",s.semester);
    getch();
}