#include<stdio.h>
#include<conio.h>
void main()
{
      int sum=0,a,rem;

        printf("enter the number \n");
          scanf("%d",&a);

      while(a!=0)
      {
        rem=a%10;
        sum=sum+rem;
        a=a/10;

    }
    printf("the sum is %d",sum);
    getch();}
