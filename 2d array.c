#include<stdio.h>
#include<conio.h>
void main()
{   int row,coloumn;
    int arr[3][3];
    for(row=0;row<3;row++)
    {
        for(coloumn=0;coloumn<3;coloumn++)
        {
            scanf("%d",&arr[row][coloumn]);
        }
    }

         for(row=0;row<3;row++)
    {
        for(coloumn=0;coloumn<3;coloumn++)
        {
            printf("\t%d",arr[row][coloumn]);
        }
        printf("\n");
    }
         getch();
         }

