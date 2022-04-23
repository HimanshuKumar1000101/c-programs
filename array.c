#include<stdio.h>
#include<conio.h>
void main()
{ int b,z=0;
    int a[5];

    printf("enter the 5 value");
    for(b=1;b<=5;b++)
    {
        scanf("%d",&a[b]);
    }
 for(b=1;b<=5;b++)
    {
        if(a[b]%2==0)


     printf(" sum of digits %d\n",a[b]);
    }
getch();

}
