#include<stdio.h>
#include<conio.h>
void a1();//function declaration
void main()
{
    a1();  //function call
    getch();
}
void a1() //function definition
  { int b,c,sub;
     printf("enter two number \n");
     scanf("%d%d",&b,&c);
     sub=b-c;
     printf("sub=%d",sub);

  }
