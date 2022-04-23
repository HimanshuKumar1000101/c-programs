#include<stdio.h>
#include<conio.h>
struct student_record
{
    int id;
    char name[30];
   char course[10];
   int age;
    } v1;
    void main()
    {
        v1.id=12008223;
v1.age=18;
strcpy(v1.name,"himanshu kumar" );
strcpy(v1.course,"BCA hon" );
printf("id=%d\n",v1.id);
printf("name=%s\n",v1.name);
printf("course=%s\n",v1.course);
printf("age=%d\n",v1.age);
getch();

}

