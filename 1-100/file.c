#include<stdio.h>
#include<conio.h>

void main()
{

 clrscr();
 //create an file
 FILE *fp;
 //open the file for write that already made
 fp = fopen("student.cpp", "w");
 //store data
 char name[100];
 printf("enter name = ");
 scanf("%s",&name);
 fprintf(fp,"name = %s",name);
 //close the file
 fclose(fp);

 //open the file for read that already made
 fp = fopen("student.cpp", "r");

 char ch;
 ch=fgetc(fp);
 while(ch != EOF)
 {
  printf("%c",ch);
  ch=fgetc(fp);
 }
 printf("\n");
 //close the file
 fclose(fp);

 //open the file for modify data and show it.
 fp = fopen("student.cpp", "a");

 char lname[100];
 printf("\n enter last name = ");
 scanf("%s",&lname);
 fprintf(fp,"\nlast name = %s",lname);
 //close the file
 fclose(fp);

 //open file for read full data
 fp = fopen("student.cpp", "r");

 ch=fgetc(fp);
 printf("\n");
 while(ch != EOF)
 {
  printf("%c",ch);
  ch=fgetc(fp);
 }
 printf("\n");
 //close the file
 fclose(fp);

getch();
}