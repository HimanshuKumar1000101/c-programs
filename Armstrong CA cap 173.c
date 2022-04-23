#include<iostream>
using namespace std;
int main()
{
int num,a, rem, sum = 0;
//rem is remainder and original is the original number
cout<<"Enter a three-digit Number: ";
cin>>num;
a = num;
while(a != 0)
{
rem = a%10;
sum =sum + rem*rem*rem;
a=a/ 10;
}
if(sum == num)
cout<<"%d is an Armstrong number."<<num;
else
cout<<"%d is not an Armstrong number."<<num);
return 0;
}

