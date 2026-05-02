#include<iostream>
using namespace std;
int main()
{
float a,b;
int ch;
cout<<"1.Add 2.Subtract 3.Multiply 4.Divide"<<endl;
cout<<"Enter choice: ";
cin>>ch;
cout<<"Enter two numbers: ";
cin>>a>>b;
switch(ch)
{
case 1:
cout<<"Result: "<<a+b<<endl;
break;
case 2:
cout<<"Result: "<<a-b<<endl;
break;
case 3:
cout<<"Result: "<<a*b<<endl;
break;
case 4:
cout<<"Result: "<<a/b<<endl;
break;
default:
cout<<"Invalid choice"<<endl;
}
return 0;
}