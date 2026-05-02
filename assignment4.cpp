#include<iostream>
using namespace std;

//Q1
class Rectangle
{
private:
float length;
float breadth;

public:
Rectangle()
{
length = 0;
breadth = 0;
}

Rectangle(float l, float b)
{
length = l;
breadth = b;
}

Rectangle(float val)
{
length = val;
breadth = val;
}

void calculateArea()
{
cout<<"area = "<<length*breadth<<endl;
}
};

void q1()
{
Rectangle r1;
Rectangle r2(5.0f, 3.0f);
Rectangle r3(4.0f);
cout<<"no parameter: ";
r1.calculateArea();
cout<<"two parameters: ";
r2.calculateArea();
cout<<"one parameter: ";
r3.calculateArea();
}

//Q2
class Rect
{
private:
float length;
float breadth;

public:
Rect(float l=1, float b=1)
{
length = l;
breadth = b;
}

void calculateArea()
{
cout<<"area = "<<length*breadth<<endl;
}

~Rect()
{
cout<<"destructor called for rect"<<endl;
}
};

void q2()
{
Rect r1;
Rect r2(5.0f, 3.0f);
Rect r3(4.0f);
Rect arr[3] = {r1, r2, r3};
for(int i=0;i<3;i++)
{
cout<<"rect "<<i+1<<" ";
arr[i].calculateArea();
}
}

//Q3
class Demo
{
public:
Demo()
{
cout<<"constructor called"<<endl;
}

~Demo()
{
cout<<"destructor called"<<endl;
}
};

void q3()
{
cout<<"creating object d1"<<endl;
Demo d1;
cout<<"creating object d2"<<endl;
Demo d2;
cout<<"end of q3 scope, destructors will fire"<<endl;
}

//Q4
class Sample
{
public:
int x;
Sample()
{
x = 0;
cout<<"sample constructor called"<<endl;
}
~Sample()
{
cout<<"sample destructor called"<<endl;
}
};

void q4()
{
int *iptr = new int;
*iptr = 10;
cout<<"dynamic int: "<<*iptr<<endl;
delete iptr;

float *fptr = new float;
*fptr = 3.14f;
cout<<"dynamic float: "<<*fptr<<endl;
delete fptr;

int *iarr = new int[5];
for(int i=0;i<5;i++) iarr[i] = i+1;
cout<<"dynamic int array: ";
for(int i=0;i<5;i++) cout<<iarr[i]<<" ";
cout<<endl;
delete[] iarr;

float *farr = new float[3];
farr[0]=1.1f; farr[1]=2.2f; farr[2]=3.3f;
cout<<"dynamic float array: ";
for(int i=0;i<3;i++) cout<<farr[i]<<" ";
cout<<endl;
delete[] farr;

Sample *obj = new Sample();
obj->x = 42;
cout<<"dynamic object x: "<<obj->x<<endl;
delete obj;

Sample *objArr = new Sample[2];
objArr[0].x = 1;
objArr[1].x = 2;
cout<<"dynamic array of objects: "<<objArr[0].x<<" "<<objArr[1].x<<endl;
delete[] objArr;
}

int main()
{
int choice;
cout<<"enter question number (1-4): ";
cin>>choice;
switch(choice)
{
case 1: q1(); break;
case 2: q2(); break;
case 3: q3(); break;
case 4: q4(); break;
default: cout<<"invalid"<<endl;
}
return 0;
}
