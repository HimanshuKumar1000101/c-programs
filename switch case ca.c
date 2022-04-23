#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,sum,subtract,divide,multiply;
 printf("Enter the \n < 1= sum >\n < 2= subtract >\n < 3= divide >\n < 4= multiply >\n");
 scanf("%d",&c);
 switch(c)
 {
     case 1: printf("Enter the two numbers\n");
             scanf("%d%d",&a,&b);
             sum=a+b;
             printf("sum of two numbers =%d",sum);
             break;
             case 2:printf("Enter the two numbers\n");
             scanf("%d%d",&a,&b);
              subtract=a-b;
             printf("subtract of two numbers =%d",subtract);
             break;
             case 3: printf("Enter the two numbers\n");
             scanf("%d%d",&a,&b);
             divide=a/b;

             printf("divide of two numbers =%d",divide);
             break;
             case 4: printf("Enter the two numbers\n");
             scanf("%d%d",&a,&b);
             multiply=a*b;
             printf("multiply of two numbers =%d",multiply);
             break;
             default:
                 printf("enter valid number");
                 }
getch();}
