#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a number: ";
cin>>a;
cout<<"Original: "<<a<<endl;
a+=10;
cout<<"After +=10: "<<a<<endl;
a-=5;
cout<<"After -=5: "<<a<<endl;
return 0;
}