/*write a program to check weather the number exists in the range
 of 40 - 50 using conditional operator (40 and 50 are inclusive)*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a;
    printf("enter the number");
    scanf("%d",&a);
    (a<=50&&a>=40) ? printf("the number exists in 40-50 "):printf("the number not exists in 40-50");
    getch();

 }
