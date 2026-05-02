#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number: ";
cin>>n;
if(n%2==0)
{
cout<<"Even (if-else)"<<endl;
}
else
{
cout<<"Odd (if-else)"<<endl;
}
string res = (n%2==0)?"Even":"Odd";
cout<<res<<" (conditional operator)"<<endl;
return 0;
}