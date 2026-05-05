// Name: Sayam Batra
// Roll No: 1024150252
// Batch: 2O33
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

//Q1
class Polygon
{
protected:
int width, height;
public:
void set_value(int w, int h){ width=w; height=h; }
virtual int calculate_area(){ return 0; }
};

class RectangleP : public Polygon
{
public:
int calculate_area(){ return width*height; }
};

class TriangleP : public Polygon
{
public:
int calculate_area(){ return width*height/2; }
};

void q1()
{
RectangleP r;
TriangleP t;
Polygon *p1 = &r;
Polygon *p2 = &t;
p1->set_value(4,5);
p2->set_value(4,5);
cout<<"rectangle area: "<<p1->calculate_area()<<endl;
cout<<"triangle area: "<<p2->calculate_area()<<endl;
}

//Q2
class Shape
{
public:
virtual float area() = 0;
virtual void display() = 0;
};

class Circle : public Shape
{
float radius;
public:
Circle(float r){ radius=r; }
float area(){ return 3.14159f*radius*radius; }
void display(){ cout<<"circle radius="<<radius<<" area="<<area()<<endl; }
};

class RectangleS : public Shape
{
float l,b;
public:
RectangleS(float x, float y){ l=x; b=y; }
float area(){ return l*b; }
void display(){ cout<<"rectangle l="<<l<<" b="<<b<<" area="<<area()<<endl; }
};

class TriangleS : public Shape
{
float base,ht;
public:
TriangleS(float b, float h){ base=b; ht=h; }
float area(){ return 0.5f*base*ht; }
void display(){ cout<<"triangle base="<<base<<" height="<<ht<<" area="<<area()<<endl; }
};

void q2()
{
Shape *shapes[3];
shapes[0] = new Circle(5);
shapes[1] = new RectangleS(4,6);
shapes[2] = new TriangleS(3,8);
for(int i=0;i<3;i++) shapes[i]->display();
for(int i=0;i<3;i++) delete shapes[i];
}

//Q3
float area(float base, float height)
{
return 0.5f*base*height;
}

float area(float side, int type)
{
if(type==1) return (sqrt(3.0f)/4)*side*side;
return 0;
}

float area(float a, float b, float c)
{
float s = (a+b+c)/2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}

void q3()
{
cout<<"right angle triangle area: "<<area(4.0f,3.0f)<<endl;
cout<<"equilateral triangle area: "<<area(5.0f,1)<<endl;
cout<<"isosceles triangle area: "<<area(5.0f,5.0f,6.0f)<<endl;
}

//Q4
class Student
{
public:
string name;
virtual void display() = 0;
};

class Engineering : public Student
{
public:
Engineering(string n){ name=n; }
void display(){ cout<<"Engineering student: "<<name<<endl; }
};

class Medicine : public Student
{
public:
Medicine(string n){ name=n; }
void display(){ cout<<"Medicine student: "<<name<<endl; }
};

class Science : public Student
{
public:
Science(string n){ name=n; }
void display(){ cout<<"Science student: "<<name<<endl; }
};

void q4()
{
Student *arr[3];
arr[0] = new Engineering("Sayam");
arr[1] = new Medicine("Rahul");
arr[2] = new Science("Priya");
for(int i=0;i<3;i++) arr[i]->display();
for(int i=0;i<3;i++) delete arr[i];
}

//Q5
class Time
{
public:
int h,m,s;
Time(int x=0, int y=0, int z=0){ h=x; m=y; s=z; }
Time operator+(const Time &t)
{
Time res;
res.s = s + t.s;
res.m = m + t.m + res.s/60;
res.s = res.s%60;
res.h = h + t.h + res.m/60;
res.m = res.m%60;
return res;
}
void show(){ cout<<"time: "<<h<<"h "<<m<<"m "<<s<<"s"<<endl; }
};

void q5()
{
Time t1(5,15,34), t2(9,53,58), t3;
t3 = t1 + t2;
t3.show();
}

//Q6
class STRING
{
string val;
public:
STRING(string s=""){ val=s; }
bool operator==(const STRING &s){ return val==s.val; }
STRING operator+(const STRING &s){ return STRING(val+s.val); }
void display(){ cout<<val<<endl; }
};

void q6()
{
STRING s1("hello"), s2("hello"), s3(" world");
if(s1==s2) cout<<"strings are equal"<<endl;
STRING s4 = s1+s3;
s4.display();
}

//Q7
class Matrix
{
public:
int data[2][2];
Matrix(){ for(int i=0;i<2;i++) for(int j=0;j<2;j++) data[i][j]=0; }
friend Matrix operator*(const Matrix &a, const Matrix &b);
void display()
{
for(int i=0;i<2;i++){ for(int j=0;j<2;j++) cout<<data[i][j]<<" "; cout<<endl; }
}
};

Matrix operator*(const Matrix &a, const Matrix &b)
{
Matrix res;
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
for(int k=0;k<2;k++)
res.data[i][j] += a.data[i][k]*b.data[k][j];
return res;
}

void q7()
{
Matrix m1, m2;
m1.data[0][0]=1; m1.data[0][1]=2; m1.data[1][0]=3; m1.data[1][1]=4;
m2.data[0][0]=5; m2.data[0][1]=6; m2.data[1][0]=7; m2.data[1][1]=8;
Matrix m3 = m1*m2;
cout<<"matrix product:"<<endl;
m3.display();
}

//Q8
class SafeArray
{
int arr[5];
public:
SafeArray(){ for(int i=0;i<5;i++) arr[i]=i*10; }
int operator[](int i)
{
if(i<0||i>=5){ cout<<"index "<<i<<" out of bounds"<<endl; return -1; }
return arr[i];
}
};

void q8()
{
SafeArray sa;
cout<<"arr[2]: "<<sa[2]<<endl;
cout<<"arr[7]: "<<sa[7]<<endl;
}

//Q9
class Box
{
float l,b,h;
public:
void operator()(float x, float y, float z){ l=x; b=y; h=z; }
void display(){ cout<<"box: "<<l<<"x"<<b<<"x"<<h<<endl; }
};

void q9()
{
Box box;
box(3.0f, 4.0f, 5.0f);
box.display();
}

//Q10
class Point
{
public:
int x, y;
Point(int a=0, int b=0){ x=a; y=b; }
friend istream& operator>>(istream &in, Point &p);
friend ostream& operator<<(ostream &out, const Point &p);
};

istream& operator>>(istream &in, Point &p)
{
cout<<"enter x and y: ";
in>>p.x>>p.y;
return in;
}

ostream& operator<<(ostream &out, const Point &p)
{
out<<"("<<p.x<<","<<p.y<<")";
return out;
}

void q10()
{
Point p;
cin>>p;
cout<<"point: "<<p<<endl;
}

//Q11
class TestFloat
{
float val;
public:
TestFloat(float f){ val=f; cout<<"converted float "<<f<<" to object"<<endl; }
void display(){ cout<<"value: "<<val<<endl; }
};

void q11()
{
TestFloat t = 3.14f;
t.display();
}

//Q12
class TestUDT
{
float val;
public:
TestUDT(float f){ val=f; }
operator float(){ cout<<"converting object to float"<<endl; return val; }
};

void q12()
{
TestUDT t(2.71f);
float f = t;
cout<<"float value: "<<f<<endl;
}

//Q13
class Polar
{
public:
float r, theta;
Polar(float r, float t){ this->r=r; this->theta=t; }
};

class Cartesian
{
float x, y;
public:
Cartesian(const Polar &p)
{
x = p.r * cos(p.theta);
y = p.r * sin(p.theta);
}
void show(){ cout<<"x="<<x<<" y="<<y<<endl; }
};

void q13()
{
Polar p(10,5);
Cartesian c = p;
c.show();
}

int main()
{
int choice;
cout<<"enter question number (1-13): ";
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
case 11: q11(); break;
case 12: q12(); break;
case 13: q13(); break;
default: cout<<"invalid"<<endl;
}
return 0;
}
