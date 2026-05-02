#include<iostream>
#include<string>
using namespace std;

//Q1
struct Student
{
string name;
int rollno;
string degree;
string hostel;
float cgpa;

void addDetails()
{
cout<<"enter name: ";
cin>>name;
cout<<"enter roll no: ";
cin>>rollno;
cout<<"enter degree: ";
cin>>degree;
cout<<"enter hostel: ";
cin>>hostel;
cout<<"enter cgpa: ";
cin>>cgpa;
}

void updateDetails()
{
cout<<"enter new name: ";
cin>>name;
cout<<"enter new degree: ";
cin>>degree;
}

void updateCGPA()
{
cout<<"enter new cgpa: ";
cin>>cgpa;
}

void updateHostel()
{
cout<<"enter new hostel: ";
cin>>hostel;
}

void displaydetails()
{
cout<<"Name: "<<name<<endl;
cout<<"Roll No: "<<rollno<<endl;
cout<<"Degree: "<<degree<<endl;
cout<<"Hostel: "<<hostel<<endl;
cout<<"CGPA: "<<cgpa<<endl;
}
};

void q1()
{
Student s;
s.addDetails();
s.displaydetails();
}

//Q2
class StudentClass
{
private:
string name;
int rollno;
string degree;
string hostel;
float cgpa;

public:
void addDetails()
{
cout<<"enter name: ";
cin>>name;
cout<<"enter roll no: ";
cin>>rollno;
cout<<"enter degree: ";
cin>>degree;
cout<<"enter hostel: ";
cin>>hostel;
cout<<"enter cgpa: ";
cin>>cgpa;
}

void updateDetails()
{
cout<<"enter new name: ";
cin>>name;
cout<<"enter new degree: ";
cin>>degree;
}

void updateCGPA()
{
cout<<"enter new cgpa: ";
cin>>cgpa;
}

void updateHostel()
{
cout<<"enter new hostel: ";
cin>>hostel;
}

void displaydetails()
{
cout<<"Name: "<<name<<endl;
cout<<"Roll No: "<<rollno<<endl;
cout<<"Degree: "<<degree<<endl;
cout<<"Hostel: "<<hostel<<endl;
cout<<"CGPA: "<<cgpa<<endl;
}
};

void q2()
{
StudentClass s;
s.addDetails();
s.displaydetails();
}

//Q3
class Demo
{
private:
void privateFunc()
{
cout<<"private function called"<<endl;
}

public:
void publicFunc()
{
cout<<"inside public function"<<endl;
privateFunc();
}
};

void q3()
{
Demo d;
d.publicFunc();
}

//Q4
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

void q4()
{
Rectangle r;
r.getdata();
r.calculatearea();
}

//Q5
class Complex
{
public:
float real;
float imag;

void setComplex(float r, float i)
{
real = r;
imag = i;
}

void displayComplex()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}

Complex addComplex(Complex c)
{
Complex res;
res.real = real + c.real;
res.imag = imag + c.imag;
return res;
}
};

void q5()
{
Complex c1, c2, c3;
float r, i;
cout<<"enter real and imaginary for first: ";
cin>>r>>i;
c1.setComplex(r, i);
cout<<"enter real and imaginary for second: ";
cin>>r>>i;
c2.setComplex(r, i);
c3 = c1.addComplex(c2);
cout<<"sum = ";
c3.displayComplex();
}

//Q6
int x = 100;

class MyClass
{
public:
static int count;
void show();
};

int MyClass::count = 0;

void MyClass::show()
{
int x = 10;
cout<<"local x = "<<x<<endl;
cout<<"global x = "<<::x<<endl;
cout<<"static count = "<<MyClass::count<<endl;
::cout<<"using scope resolution with cout"<<::endl;
}

void q6()
{
MyClass obj;
MyClass::count = 5;
obj.show();
}

//Q7
namespace first
{
int val = 10;
void display()
{
cout<<"first namespace val = "<<val<<endl;
}
}

namespace second
{
int val = 20;
void display()
{
cout<<"second namespace val = "<<val<<endl;
}
}

void q7()
{
first::display();
second::display();
cout<<"first val = "<<first::val<<endl;
cout<<"second val = "<<second::val<<endl;
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
