#include<iostream>
using namespace std;
int main()
{
int days;
cout<<"Enter number of days late: ";
cin>>days;
if(days>30)
{
cout<<"Membership cancelled."<<endl;
}
else if(days>10)
{
cout<<"Fine: 5 rupees"<<endl;
}
else if(days>=6)
{
cout<<"Fine: 1 rupee"<<endl;
}
else if(days>=1)
{
cout<<"Fine: 50 paise"<<endl;
}
else
{
cout<<"No fine."<<endl;
}
return 0;
}