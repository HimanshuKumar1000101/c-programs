#include<stdio.h>
#include<conio.h>
void main()
{
    int num,j,x,A;
    printf("\n Enter a number for \n generation the pyramid:\n");
    scanf("%d",&num);
    for(x=0;x<num;++x)
    {
for (j = 1;  j< x; ++j) {
         printf("%c",j);
      }
 printf("\n");
   }

   getch();
}
