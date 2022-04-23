#include<iostream>
using namespace std;
int main()
{
int num,a, rem, sum = 0 ;
int arr[]={0};

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
{
cout<<" is an Armstrong number."<<arr[num];
}
else{
cout<<" is not an Armstrong number."<<num;
}
return 0;
}

