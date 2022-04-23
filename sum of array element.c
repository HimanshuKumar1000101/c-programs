#include<stdio.h>
#include<conio.h>
void main()
{ int b,sum=0;
    int a[10];

    printf("enter the 5 value");
    for(b=1;b<=5;b++)
    {
        scanf("%d",&a[b]);
    }
 for(b=1;b<=5;b++)
    {
        sum=sum+a[b];

     } printf(" sum of elements  %d",sum);

getch();

}
