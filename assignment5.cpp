// Name: Sayam Batra
// Roll No: 1024150252
// Batch: 2O33
#include<iostream>
#include<string>
using namespace std;

//Q1
class Animal
{
public:
void speak()
{
cout<<"animal makes a sound"<<endl;
}
};

class Dog : public Animal
{
public:
void bark()
{
cout<<"dog barks"<<endl;
}
};

void q1()
{
Animal a;
a.speak();
Dog d;
d.speak();
d.bark();
}

//Q2
class Base
{
protected:
int x;
public:
Base(){ x = 42; }
};

class Derived : public Base
{
public:
void show()
{
cout<<"protected x from base: "<<x<<endl;
}
};

void q2()
{
Derived d;
d.show();
}

//Q3
class BaseClass
{
public:
int pub;
protected:
int prot;
private:
int priv;
public:
BaseClass(){ pub=1; prot=2; priv=3; }
};

class PublicDerived : public BaseClass
{
public:
void show()
{
cout<<"public inheritance"<<endl;
cout<<"pub accessible: "<<pub<<endl;
cout<<"prot accessible: "<<prot<<endl;
}
};

class ProtectedDerived : protected BaseClass
{
public:
void show()
{
cout<<"protected inheritance"<<endl;
cout<<"pub now protected: "<<pub<<endl;
cout<<"prot still protected: "<<prot<<endl;
}
};

class PrivateDerived : private BaseClass
{
public:
void show()
{
cout<<"private inheritance"<<endl;
cout<<"pub now private: "<<pub<<endl;
cout<<"prot now private: "<<prot<<endl;
}
};

void q3()
{
PublicDerived pd;
pd.show();
ProtectedDerived prd;
prd.show();
PrivateDerived pvd;
pvd.show();
}

//Q4
class A4
{
public:
void showA(){ cout<<"class A"<<endl; }
};

class B4 : public A4
{
public:
void showB(){ cout<<"class B"<<endl; }
};

class B4b
{
public:
void showB2(){ cout<<"class B (multiple)"<<endl; }
};

class C4 : public A4, public B4b
{
public:
void showC(){ cout<<"class C inherits A and B"<<endl; }
};

class C4h : public A4
{
public:
void showC2(){ cout<<"class C (hierarchical)"<<endl; }
};

class D4h : public A4
{
public:
void showD(){ cout<<"class D (hierarchical)"<<endl; }
};

class A4ml
{
public:
void showA(){ cout<<"A (multilevel)"<<endl; }
};

class B4ml : public A4ml
{
public:
void showB(){ cout<<"B (multilevel)"<<endl; }
};

class C4ml : public B4ml
{
public:
void showC(){ cout<<"C (multilevel)"<<endl; }
};

class B4hy : virtual public A4
{
public:
void showB(){ cout<<"B (hybrid)"<<endl; }
};

class C4hy : virtual public A4
{
public:
void showC(){ cout<<"C (hybrid)"<<endl; }
};

class D4hy : public B4hy, public C4hy
{
public:
void showD(){ cout<<"D inherits B and C (hybrid)"<<endl; }
};

void q4()
{
cout<<"single:"<<endl;
B4 b; b.showA(); b.showB();

cout<<"multiple:"<<endl;
C4 c; c.showA(); c.showB2(); c.showC();

cout<<"hierarchical:"<<endl;
B4 bh; bh.showA(); bh.showB();
C4h ch; ch.showA(); ch.showC2();
D4h dh; dh.showA(); dh.showD();

cout<<"multilevel:"<<endl;
C4ml cml; cml.showA(); cml.showB(); cml.showC();

cout<<"hybrid:"<<endl;
D4hy dhy; dhy.showA(); dhy.showB(); dhy.showC(); dhy.showD();
}

//Q5
class BaseQ5
{
public:
BaseQ5(){ cout<<"base constructor"<<endl; }
~BaseQ5(){ cout<<"base destructor"<<endl; }
};

class DerivedQ5 : public BaseQ5
{
public:
DerivedQ5(){ cout<<"derived constructor"<<endl; }
~DerivedQ5(){ cout<<"derived destructor"<<endl; }
};

void q5()
{
cout<<"creating derived object:"<<endl;
DerivedQ5 d;
cout<<"going out of scope:"<<endl;
}

//Q6
class Book
{
protected:
string title;
string author;
float price;
public:
void setBook(string t, string a, float p)
{
title=t; author=a; price=p;
}
void display()
{
cout<<"title: "<<title<<endl;
cout<<"author: "<<author<<endl;
cout<<"price: "<<price<<endl;
}
};

class Textbook : public Book
{
private:
string subject;
public:
void setTextbook(string t, string a, float p, string s)
{
setBook(t,a,p);
subject=s;
}
void display()
{
Book::display();
cout<<"subject: "<<subject<<endl;
}
};

void q6()
{
Book b;
b.setBook("Novel","AuthorA",299);
cout<<"book details:"<<endl;
b.display();
Textbook tb;
tb.setTextbook("Physics","AuthorB",499,"Science");
cout<<"textbook details:"<<endl;
tb.display();
}

//Q7
class Speedometer
{
protected:
int speed;
public:
void setSpeed(int s){ speed=s; }
void showSpeed(){ cout<<"speed: "<<speed<<" kmph"<<endl; }
};

class FuelGauge
{
protected:
int fuel;
public:
void setFuel(int f){ fuel=f; }
void showFuel(){ cout<<"fuel: "<<fuel<<"%"<<endl; }
};

class Thermometer
{
protected:
int temp;
public:
void setTemp(int t){ temp=t; }
void showTemp(){ cout<<"temperature: "<<temp<<"C"<<endl; }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer
{
public:
void showDashboard()
{
cout<<"--- car dashboard ---"<<endl;
showSpeed();
showFuel();
showTemp();
}
};

void q7()
{
CarDashboard car;
car.setSpeed(80);
car.setFuel(60);
car.setTemp(90);
car.showDashboard();
}

//Q8
class LibraryUser
{
protected:
string name;
int id;
string contact;
public:
void setUser(string n, int i, string c)
{
name=n; id=i; contact=c;
}
void display()
{
cout<<"name: "<<name<<endl;
cout<<"id: "<<id<<endl;
cout<<"contact: "<<contact<<endl;
}
};

class Student8 : public LibraryUser
{
private:
string grade;
public:
void setStudent(string n, int i, string c, string g)
{
setUser(n,i,c);
grade=g;
}
void display()
{
LibraryUser::display();
cout<<"grade: "<<grade<<endl;
}
};

class Teacher8 : public LibraryUser
{
private:
string department;
public:
void setTeacher(string n, int i, string c, string d)
{
setUser(n,i,c);
department=d;
}
void display()
{
LibraryUser::display();
cout<<"department: "<<department<<endl;
}
};

void q8()
{
Student8 s;
s.setStudent("Sayam",1,"9999999999","A");
cout<<"student:"<<endl;
s.display();
Teacher8 t;
t.setTeacher("Mr.Sharma",2,"8888888888","CS");
cout<<"teacher:"<<endl;
t.display();
}

//Q9
class Vehicle
{
protected:
string make;
string model;
int year;
public:
void setVehicle(string mk, string mo, int y)
{
make=mk; model=mo; year=y;
}
void display()
{
cout<<"make: "<<make<<" model: "<<model<<" year: "<<year<<endl;
}
};

class Truck : public Vehicle
{
protected:
float loadCapacity;
public:
void setTruck(string mk, string mo, int y, float lc)
{
setVehicle(mk,mo,y);
loadCapacity=lc;
}
void display()
{
Vehicle::display();
cout<<"load capacity: "<<loadCapacity<<" tons"<<endl;
}
};

class RefrigeratedTruck : public Truck
{
private:
float tempControl;
public:
void setRefTruck(string mk, string mo, int y, float lc, float tc)
{
setTruck(mk,mo,y,lc);
tempControl=tc;
}
void display()
{
Truck::display();
cout<<"temp control: "<<tempControl<<"C"<<endl;
}
};

void q9()
{
RefrigeratedTruck rt;
rt.setRefTruck("Volvo","FH",2022,20.5,-18);
rt.display();
}

//Q10
class Person
{
protected:
string name;
string address;
public:
void setPerson(string n, string a){ name=n; address=a; }
void display(){ cout<<"name: "<<name<<" address: "<<address<<endl; }
};

class Staff : virtual public Person
{
protected:
int empId;
string dept;
public:
void setStaff(string n, string a, int e, string d)
{
setPerson(n,a);
empId=e; dept=d;
}
void display()
{
Person::display();
cout<<"empid: "<<empId<<" dept: "<<dept<<endl;
}
};

class Student10 : virtual public Person
{
protected:
int studentId;
string grade;
public:
void setStudent(string n, string a, int si, string g)
{
setPerson(n,a);
studentId=si; grade=g;
}
void display()
{
Person::display();
cout<<"studentid: "<<studentId<<" grade: "<<grade<<endl;
}
};

class TeachingAssistant : public Staff, public Student10
{
public:
void setTA(string n, string a, int e, string d, int si, string g)
{
setPerson(n,a);
empId=e; dept=d;
studentId=si; grade=g;
}
void display()
{
Person::display();
cout<<"empid: "<<empId<<" dept: "<<dept<<endl;
cout<<"studentid: "<<studentId<<" grade: "<<grade<<endl;
}
};

void q10()
{
TeachingAssistant ta;
ta.setTA("Rahul","Delhi",101,"CS",201,"A");
cout<<"teaching assistant details:"<<endl;
ta.display();
}

int main()
{
int choice;
cout<<"enter question number (1-10): ";
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
default: cout<<"invalid"<<endl;
}
return 0;
}
