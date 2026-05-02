#include<iostream>
using namespace std;

//Q1
class Box
{
public:
int length;

Box(int l)
{
length = l;
}

void showThis()
{
cout<<"this pointer address: "<<this<<endl;
cout<<"length via this: "<<this->length<<endl;
}
};

void q1()
{
Box b(10);
cout<<"dot operator: "<<b.length<<endl;
Box *ptr = &b;
cout<<"arrow operator: "<<ptr->length<<endl;
b.showThis();
}

//Q2
class ClassB;

class ClassA
{
private:
int val;
public:
ClassA(int v){ val = v; }
friend void swapValues(ClassA &a, ClassB &b);
void display(){ cout<<"ClassA val: "<<val<<endl; }
};

class ClassB
{
private:
int val;
public:
ClassB(int v){ val = v; }
friend void swapValues(ClassA &a, ClassB &b);
void display(){ cout<<"ClassB val: "<<val<<endl; }
};

void swapValues(ClassA &a, ClassB &b)
{
int temp = a.val;
a.val = b.val;
b.val = temp;
}

void q2()
{
ClassA a(5);
ClassB b(10);
cout<<"before swap"<<endl;
a.display();
b.display();
swapValues(a, b);
cout<<"after swap"<<endl;
a.display();
b.display();
}

//Q3
class QClass;

class PClass
{
private:
int x;
public:
PClass(int v){ x = v; }
friend void addObjects(PClass p, QClass q);
};

class QClass
{
private:
int y;
public:
QClass(int v){ y = v; }
friend void addObjects(PClass p, QClass q);
};

void addObjects(PClass p, QClass q)
{
cout<<"sum = "<<p.x + q.y<<endl;
}

void q3()
{
PClass p(15);
QClass q(25);
addObjects(p, q);
}

//Q4
class Engine
{
private:
int horsepower;
public:
Engine(int hp){ horsepower = hp; }
friend class Car;
};

class Car
{
public:
void showEngine(Engine e)
{
cout<<"engine horsepower: "<<e.horsepower<<endl;
}
};

void q4()
{
Engine e(200);
Car c;
c.showEngine(e);
}

//Q5
class Rectangle
{
private:
int width;
int height;
public:
void getdata()
{
cout<<"enter width: ";
cin>>width;
cout<<"enter height: ";
cin>>height;
}
void calculatearea()
{
cout<<"area = "<<width*height<<endl;
}
};

void q5()
{
int n;
cout<<"how many rectangles: ";
cin>>n;
Rectangle arr[10];
for(int i=0;i<n;i++)
{
cout<<"rectangle "<<i+1<<":"<<endl;
arr[i].getdata();
}
for(int i=0;i<n;i++)
{
cout<<"rectangle "<<i+1<<" ";
arr[i].calculatearea();
}
}

//Q6
inline int cube(int n)
{
return n*n*n;
}

void q6()
{
int n;
cout<<"enter a number: ";
cin>>n;
cout<<"cube = "<<cube(n)<<endl;
}

//Q7
class Num
{
public:
int val;
Num(int v){ val = v; }
Num(){ val = 0; }
};

Num passByValue(Num n)
{
n.val = n.val * 2;
return n;
}

Num passByAddress(Num *n)
{
n->val = n->val * 2;
return *n;
}

void q7()
{
Num a(5);
Num res1 = passByValue(a);
cout<<"pass by value result: "<<res1.val<<endl;
cout<<"original unchanged: "<<a.val<<endl;

Num b(5);
Num res2 = passByAddress(&b);
cout<<"pass by address result: "<<res2.val<<endl;
cout<<"original changed: "<<b.val<<endl;
}

int main()
{
int choice;
cout<<"enter question number (1-7): ";
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
default: cout<<"invalid"<<endl;
}
return 0;
}
