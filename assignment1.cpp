// Name: Sayam Batra
// Roll No: 1024150252
// Batch: 2O33

#include<iostream>
#include<iomanip>
using namespace std;

//Q1
void q1(){ cout<<"Hello World"<<endl; }

//Q2
void q2(){
int a; float b; char c;
cout<<"enter int float char: "; cin>>a>>b>>c;
cout<<"Integer: "<<a<<endl;
cout<<"Decimal: "<<b<<endl;
cout<<"Character: "<<c<<endl;
}

//Q3
void q3(){
int a,b; cout<<"enter two numbers: "; cin>>a>>b;
cout<<"Addition: "<<a+b<<endl;
cout<<"Subtraction: "<<a-b<<endl;
cout<<"Multiplication: "<<a*b<<endl;
if(b!=0) cout<<"Division: "<<a/b<<endl;
else cout<<"Division by zero"<<endl;
}

//Q4
void q4(){
float c; cout<<"enter celsius: "; cin>>c;
cout<<"Temperature in Fahrenheit: "<<(c*9/5)+32<<endl;
}

//Q5
void q5(){
cout<<"Hello\tWorld"<<endl;
cout<<"New"<<endl<<"Line"<<endl;
cout<<"Backspace"<<endl;
cout<<setw(10)<<"Right"<<endl;
cout<<"Done"<<endl;
}

//Q6
void q6(){
int x; cout<<"enter a number: "; cin>>x;
cout<<"Original: "<<x<<endl;
x+=10; cout<<"After +=10: "<<x<<endl;
x-=5; cout<<"After -=5: "<<x<<endl;
}

//Q7
void q7(){
int a,b; cout<<"enter two numbers: "; cin>>a>>b;
cout<<"Before swap: a="<<a<<" b="<<b<<endl;
a=a^b; b=a^b; a=a^b;
cout<<"After swap: a="<<a<<" b="<<b<<endl;
}

//Q8
void q8(){
int days;
int cases[]={3,8,15,35};
for(int d : cases){
if(d<=7) cout<<d<<" days  -> Fine: 50 paise"<<endl;
else if(d<=14) cout<<d<<" days  -> Fine: 1 rupee"<<endl;
else if(d<=30) cout<<d<<" days -> Fine: 5 rupees"<<endl;
else cout<<d<<" days -> Membership cancelled."<<endl;
}
}

//Q9
void q9(){
int choice,a,b;
cout<<"enter choice (1=add 2=sub 3=mul 4=div): "; cin>>choice;
cout<<"enter two numbers: "; cin>>a>>b;
switch(choice){
case 1: cout<<"Result: "<<a+b<<endl; break;
case 2: cout<<"Result: "<<a-b<<endl; break;
case 3: cout<<"Result: "<<a*b<<endl; break;
case 4: if(b!=0) cout<<"Result: "<<a/b<<endl; else cout<<"Division by zero"<<endl; break;
default: cout<<"invalid"<<endl;
}
}

//Q10
void q10(){
int n; cout<<"enter a number: "; cin>>n;
if(n%2==0) cout<<"Even (if-else)"<<endl;
else cout<<"Odd (if-else)"<<endl;
cout<<((n%2==0)?"Even":"Odd")<<" (conditional operator)"<<endl;
}

int main(){
int choice;
cout<<"enter question number (1-10): "; cin>>choice;
switch(choice){
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
default: cout<<"invalid"<<endl;
}
return 0;
}
