
#include<stdio.h>
#include<conio.h>
void main()
{   int row,col,i,j;
printf("Enter the row value of the array :");
scanf("%d",&row);
printf("Enter the column value of the array :");
scanf("%d",&col);
int array[row][col];

for(i=0;i<col;i++)
{
    for(j=0;j<row;j++)
    {
        printf("enter the value of %d %d\n",i,j);
        scanf("%d",&array[i][j]);
    }
}
for(i=0;i<col;i++)
{
    for(j=0;j<row;j++)
     {
       if(array[i][j]%10==5)
       printf("\t%d",array[i][j]);
        }
printf("\n");
} printf("The number which have last digit 5 ");
getch();
}
