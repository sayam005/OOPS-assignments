#include<iostream>
#include<iomanip>
using namespace std;

//Q1
int q1()
{
cout<<"Hello World"<<endl;
return 0;
}

//Q2
int q2()
{
int a;
float b;
char c;
cout<<"Enter an integer: ";
cin>>a;
cout<<"Enter a decimal: ";
cin>>b;
cout<<"Enter a character: ";
cin>>c;
cout<<"Integer: "<<a<<endl;
cout<<"Decimal: "<<b<<endl;
cout<<"Character: "<<c<<endl;
return 0;
}

//Q3
int q3()
{
float a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"Addition: "<<a+b<<endl;
cout<<"Subtraction: "<<a-b<<endl;
cout<<"Multiplication: "<<a*b<<endl;
cout<<"Division: "<<a/b<<endl;
return 0;
}

//Q4
int q4()
{
float c,f;
cout<<"Enter temperature in Celsius: ";
cin>>c;
f = 9*c/5+32;
cout<<"Temperature in Fahrenheit: "<<f<<endl;
return 0;
}

//Q5
int q5()
{
cout<<"Hello\tWorld"<<endl;
cout<<"New\nLine"<<endl;
cout<<"Back\bspace"<<endl;
cout<<setw(10)<<"Right"<<endl;
cout<<"Done"<<endl;
return 0;
}

//Q6
int q6()
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

//Q7
int q7()
{
int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"Before swap: a="<<a<<" b="<<b<<endl;
a=a^b;
b=a^b;
a=a^b;
cout<<"After swap: a="<<a<<" b="<<b<<endl;
return 0;
}

//Q8
int q8()
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

//Q9
int q9()
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

//Q10
int q10()
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

int main()
{
int choice;
cout<<"Enter question number (1-10): ";
cin>>choice;
switch(choice)
{
case 1: q1(); break;
case 2: q2(); break;
case 3: q3(); break;
case 4: q4(); break;
case 5: q5(); break;
case 6: q6(); break;
case 7: q7(); break;
case 8: q8(); break;
case 9: q9(); break;
case 10: q10(); break;
default: cout<<"Invalid"<<endl;
}
return 0;
}
