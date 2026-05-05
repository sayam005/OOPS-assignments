// Name: Sayam Batra
// Roll No: 1024150252
// Batch: 2O33

#include<iostream>
#include<string>
using namespace std;

//Q1
struct StudentStruct{
string name; int roll; string degree, hostel; float cgpa;
};
void q1(){
StudentStruct s;
cout<<"enter name roll degree hostel cgpa: ";
cin>>s.name>>s.roll>>s.degree>>s.hostel>>s.cgpa;
cout<<"Name: "<<s.name<<endl;
cout<<"Roll No: "<<s.roll<<endl;
cout<<"Degree: "<<s.degree<<endl;
cout<<"Hostel: "<<s.hostel<<endl;
cout<<"CGPA: "<<s.cgpa<<endl;
}

//Q2
class StudentClass{
private:
string name; int roll; string degree, hostel; float cgpa;
public:
void setData(string n,int r,string d,string h,float c){name=n;roll=r;degree=d;hostel=h;cgpa=c;}
void display(){
cout<<"Name: "<<name<<endl;
cout<<"Roll No: "<<roll<<endl;
cout<<"Degree: "<<degree<<endl;
cout<<"Hostel: "<<hostel<<endl;
cout<<"CGPA: "<<cgpa<<endl;
}
};
void q2(){
StudentClass s;
string n,d,h; int r; float c;
cout<<"enter name roll degree hostel cgpa: ";
cin>>n>>r>>d>>h>>c;
s.setData(n,r,d,h,c);
s.display();
}

//Q3
class PrivateDemo{
private:
void privateFunc(){ cout<<"private function called"<<endl; }
public:
void publicFunc(){ cout<<"inside public function"<<endl; privateFunc(); }
};
void q3(){ PrivateDemo p; p.publicFunc(); }

//Q4
class Rectangle{
float l,b;
public:
void getdata(){ cout<<"enter length and breadth: "; cin>>l>>b; }
void calculatearea(){ cout<<"area = "<<l*b<<endl; }
};
void q4(){ Rectangle r; r.getdata(); r.calculatearea(); }

//Q5
class Complex{
float real,imag;
public:
void getdata(){ cout<<"enter real and imaginary: "; cin>>real>>imag; }
void display(){ cout<<real<<"+"<<imag<<"i"<<endl; }
Complex add(Complex c){
Complex res;
res.real=real+c.real;
res.imag=imag+c.imag;
return res;
}
};
void q5(){
Complex c1,c2;
cout<<"first complex: "; c1.getdata();
cout<<"second complex: "; c2.getdata();
Complex c3=c1.add(c2);
cout<<"sum = "; c3.display();
}

//Q6
int x=100;
void q6(){
int x=10;
cout<<"local x = "<<x<<endl;
cout<<"global x = "<<::x<<endl;
static int count=0;
for(int i=0;i<5;i++) count++;
cout<<"static count = "<<count<<endl;
cout<<"using scope resolution with "<<::std::endl;
::std::cout<<"cout"<<::std::endl;
}

//Q7
namespace first{ int val=10; }
namespace second{ int val=20; }
void q7(){
cout<<"first namespace val = "<<first::val<<endl;
cout<<"second namespace val = "<<second::val<<endl;
using namespace first;
cout<<"first val = "<<val<<endl;
cout<<"second val = "<<second::val<<endl;
}

int main(){
int choice;
cout<<"enter question number (1-7): "; cin>>choice;
switch(choice){
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
