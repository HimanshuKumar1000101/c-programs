#include<stdio.h>
#include<conio.h>
void main()
{int sum;
      int rev=0,a,rem;
        printf("enter the number \n");
          scanf("%d",&a);

      while(a!=0)
      {
        rem=a%10;
        rev=rev+rem;
        a=a/10;

    }
    printf("the reverse is %d",rev);
    getch();
}
