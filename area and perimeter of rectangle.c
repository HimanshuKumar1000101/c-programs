/*write a program to accept the length and breath from the user and display
the area and perimeter of a rectangle*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
     float a,b;
     printf("\n enter the length ");
     scanf("%f",&a);
     printf("\n enter the breath ");
     scanf("%f",&b);
     printf(" area is %f",a*b);
     printf("\n perimeter is %f",2*(a+b));
     getch();


 }
