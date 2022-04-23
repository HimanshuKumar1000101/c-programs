
#include<stdio.h>
#include<conio.h>
void main()
{int sum;
      int a,b,odd=0,even=0;
        printf("enter the number \n");
          scanf("%d",&a);

      while(a!=0){
          b=a%10;
          if(b%2==0)
          {
             even=even+b;

          }
 a=a/10;
          }

   }printf(" sum of number of even digits is %d\n",even);

      getch();
}
