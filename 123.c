#include<stdio.h>
#include<conio.h>
void main()
{int marks;
printf("Enter your marks\n");
scanf("%d",&marks);

   if(marks>=90||marks==100)
    {
   printf("grade = A1 \n");
   }
   else if(marks>=80||marks<=89)
    {
    printf("marks = B1 \n");
   }
else if(marks>=70||marks<=79)
    {
    printf("marks = B2 \n");
}
    else if(marks>=60||marks<=69)
        {
    printf("marks = c1 \n");
    }
    else if(marks>=40||marks<=59)
        {
        printf("marks = c2 \n");
    }
    else if(marks>=33||marks<=39)
        {
        printf("marks = D \n");
    }
    else if{
        printf("FAIL\n");
      }
        printf("----------------------------------------------------------------------------");
    getch();}
