#include<stdio.h>
#include<conio.h>
int function(){
    int n;
    printf("enter 1 for to check number is even or odd or \n 2 for reverse of the number  :");
    scanf("%d",&n);
    switch(n){
case 1:
    return 1;
    break;
case 2:
    return 2;
    break;
    }
}
void main(){
int num,reverse=0,rem;
if(function()==1){
        printf("enter the to check the number is even or odd");
      scanf("%d",&num);
if(num%2==0){
        printf("even\n");
   }
else{
    printf("odd\n");
    }
   } else {
printf("enter any number to reverse");
scanf("%d",&num);
while(num!=0){
    rem=num%10;
    reverse=reverse*10-+rem;
    num=num/10;
}
printf("%d\n",reverse);
}
}


