
#include<stdio.h>
#include<conio.h>
void main()
{
 int units,custum;
 float charges;
 printf("Enter the customer NO. and UNITS CONSUMED\n");
 scanf("%d%d",&units,&custum);
 if(units<=200);

 charges=1.20*units;
  else if (units<=400)
    charges=100+1.50*(units-200);
 else if (units<=600)
    charges=230+1.80*(units-400);


   else
        charges=390+(units-600);
    printf("\n\n customer no: %d: charges = %.2f \n",custum,charges);
    getch();

}

