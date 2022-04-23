#include <stdio.h>
int main()
{
int num,a, rem, sum = 0;
//rem is remainder and original is the original number
printf("Enter a three-digit Number: ");
scanf("%d", &num);
a = num;
while(a != 0)
{
rem = a%10;
sum =sum + rem*rem*rem;
a=a/ 10;
}
if(sum == num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
return 0;
}
