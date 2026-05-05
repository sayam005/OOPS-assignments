// Name: Sayam Batra
// Roll No: 1024150252
// Batch: 2O33
#include<iostream>
#include<string>
using namespace std;

//Q1
class Book
{
public:
string title;
string author;
string isbn;
};

class Library
{
private:
Book books[100];
int count;

public:
Library(){ count = 0; }

bool addNewBook(string &t, string &a, string &i);
bool removeBooks(string &i);
void displayDetails();
};

bool Library::addNewBook(string &t, string &a, string &i)
{
if(count >= 100) return false;
Library::books[count].title = t;
Library::books[count].author = a;
Library::books[count].isbn = i;
count++;
return true;
}

bool Library::removeBooks(string &i)
{
for(int j=0;j<count;j++)
{
if(Library::books[j].isbn == i)
{
for(int k=j;k<count-1;k++)
Library::books[k] = Library::books[k+1];
count--;
return true;
}
}
return false;
}

void Library::displayDetails()
{
for(int j=0;j<count;j++)
{
cout<<"title: "<<books[j].title<<" author: "<<books[j].author<<" isbn: "<<books[j].isbn<<endl;
}
}

void q1()
{
Library lib;
string t1="C++ Primer",a1="Lippman",i1="111";
string t2="CLRS",a2="Cormen",i2="222";
string t3="Clean Code",a3="Martin",i3="333";
string t4="SICP",a4="Abelson",i4="444";
string t5="DDIA",a5="Kleppmann",i5="555";
lib.addNewBook(t1,a1,i1);
lib.addNewBook(t2,a2,i2);
lib.addNewBook(t3,a3,i3);
lib.addNewBook(t4,a4,i4);
lib.addNewBook(t5,a5,i5);
cout<<"all books:"<<endl;
lib.displayDetails();
lib.removeBooks(i3);
cout<<"after removing isbn 333:"<<endl;
lib.displayDetails();
}

//Q2
class Book2
{
public:
string title;
string author;
string isbn;

Book2()
{
this->title = "";
this->author = "";
this->isbn = "";
}

Book2(string t, string a, string i)
{
this->title = t;
this->author = a;
this->isbn = i;
}

Book2(const Book2 &b)
{
this->title = b.title;
this->author = b.author;
this->isbn = b.isbn;
}
};

class Library2
{
private:
Book2 books[100];
int count;

public:
Library2(){ count = 0; }

bool addNewBook(string &t, string &a, string &i);
bool removeBooks(string &i);
void displayDetails();
};

bool Library2::addNewBook(string &t, string &a, string &i)
{
if(count >= 100) return false;
this->books[count].title = t;
this->books[count].author = a;
this->books[count].isbn = i;
count++;
return true;
}

bool Library2::removeBooks(string &i)
{
for(int j=0;j<this->count;j++)
{
if(this->books[j].isbn == i)
{
for(int k=j;k<this->count-1;k++)
this->books[k] = this->books[k+1];
this->count--;
return true;
}
}
return false;
}

void Library2::displayDetails()
{
for(int j=0;j<count;j++)
{
cout<<"title: "<<books[j].title<<" author: "<<books[j].author<<" isbn: "<<books[j].isbn<<endl;
}
}

void q2()
{
Book2 b1("C++ Primer","Lippman","111");
Book2 b2(b1);
cout<<"copy constructor: "<<b2.title<<endl;

Book2 arr[3] = {Book2("CLRS","Cormen","222"), Book2("SICP","Abelson","333"), Book2()};
cout<<"initializer list:"<<endl;
for(int i=0;i<3;i++) cout<<arr[i].title<<endl;

Book2 *dynArr = new Book2[2];
dynArr[0] = Book2("Clean Code","Martin","444");
dynArr[1] = Book2("DDIA","Kleppmann","555");
cout<<"dynamic init:"<<endl;
for(int i=0;i<2;i++) cout<<dynArr[i].title<<endl;
delete[] dynArr;

Library2 lib;
string t1="Book1",a1="Auth1",i1="001";
string t2="Book2",a2="Auth2",i2="002";
string t3="Book3",a3="Auth3",i3="003";
string t4="Book4",a4="Auth4",i4="004";
string t5="Book5",a5="Auth5",i5="005";
lib.addNewBook(t1,a1,i1);
lib.addNewBook(t2,a2,i2);
lib.addNewBook(t3,a3,i3);
lib.addNewBook(t4,a4,i4);
lib.addNewBook(t5,a5,i5);
cout<<"library books:"<<endl;
lib.displayDetails();
lib.removeBooks(i2);
cout<<"after remove:"<<endl;
lib.displayDetails();
}

//Q3
class Account
{
private:
const long accNumber;
long transId;
string transType;
double balance;

public:
Account(long acc, double bal) : accNumber(acc), balance(bal), transId(1000), transType("none") {}

long depositAmount(const long &to, const long &from, const double &amount)
{
if(accNumber == to)
{
balance += amount;
transType = "debit";
}
transId++;
return transId;
}

long creditAmount(const long &to, const long &from, const double &amount)
{
if(accNumber == from)
{
balance -= amount;
transType = "credit";
}
transId++;
return transId;
}

void displayDetails() const
{
::cout<<"account: "<<accNumber<<" balance: "<<balance<<" last transaction: "<<transType<<::endl;
}
};

void q3()
{
Account accounts[5] = {
Account(1001, 5000),
Account(1002, 3000),
Account(1003, 7000),
Account(1004, 2000),
Account(1005, 9000)
};

long tid;
tid = accounts[0].depositAmount(1001, 1002, 500);
::cout<<"transaction id: "<<tid<<::endl;
tid = accounts[1].creditAmount(1001, 1002, 500);
::cout<<"transaction id: "<<tid<<::endl;

::cout<<"account details:"<<::endl;
for(int i=0;i<5;i++) accounts[i].displayDetails();
}

//Q4
class P4;
class Q4
{
private:
int y;
public:
Q4(int v){ y=v; }
friend void addObjects(P4 p, Q4 q);
};

class P4
{
private:
int x;
public:
P4(int v){ x=v; }
friend void addObjects(P4 p, Q4 q);
};

void addObjects(P4 p, Q4 q)
{
::cout<<"sum = "<<p.x + q.y<<::endl;
}

void q4()
{
P4 p(15);
Q4 q(25);
addObjects(p,q);
}

//Q5
class Complex
{
private:
float real;
float imag;

public:
Complex(float r, float i)
{
real = r;
imag = i;
}

Complex(const Complex &c)
{
real = c.real;
imag = c.imag;
}

void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}

friend void sum(Complex c1, Complex c2);
};

void sum(Complex c1, Complex c2)
{
float r = c1.real + c2.real;
float i = c1.imag + c2.imag;
cout<<"sum = "<<r<<"+"<<i<<"i"<<endl;
}

void q5()
{
Complex c1(3.0f, 4.0f);
Complex c2(c1);
cout<<"c1: "; c1.display();
cout<<"c2 (copy): "; c2.display();
Complex c3(1.0f, 2.0f);
sum(c1, c3);
}

int main()
{
int choice;
cout<<"enter question number (1-5): ";
cin>>choice;
switch(choice)
{
case 1: q1(); break;
case 2: q2(); break;
case 3: q3(); break;
case 4: q4(); break;
case 5: q5(); break;
default: cout<<"invalid"<<endl;
}
return 0;
}
