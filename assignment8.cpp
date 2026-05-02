#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

//Q1
void q1()
{
ofstream fout("NUM.TXT");
for(int i=1;i<=200;i++) fout<<i<<"\n";
fout.close();
cout<<"written 1 to 200 in NUM.TXT"<<endl;
}

//Q2
void countAlphabets()
{
ifstream fin("NOTES.TXT");
if(!fin){ cout<<"NOTES.TXT not found, creating sample"<<endl;
ofstream tmp("NOTES.TXT"); tmp<<"Hello World 123! This is a test file."; tmp.close();
fin.open("NOTES.TXT"); }
int count=0;
char ch;
while(fin.get(ch)) if(isalpha(ch)) count++;
fin.close();
cout<<"number of alphabets: "<<count<<endl;
}

void q2(){ countAlphabets(); }

//Q3
class Student
{
public:
char name[50];
int roll;
float cgpa;
Student(){}
Student(const char *n, int r, float c){ strncpy(name,n,49); roll=r; cgpa=c; }
void display(){ cout<<"name: "<<name<<" roll: "<<roll<<" cgpa: "<<cgpa<<endl; }
};

void q3()
{
Student s1("Sayam",101,8.5f);
ofstream fout("student.dat", ios::binary);
fout.write(reinterpret_cast<char*>(&s1), sizeof(s1));
fout.close();

Student s2;
ifstream fin("student.dat", ios::binary);
fin.read(reinterpret_cast<char*>(&s2), sizeof(s2));
fin.close();
cout<<"read from binary file:"<<endl;
s2.display();
}

//Q4
void q4()
{
ofstream src("source.txt");
src<<"this is the source file content."<<endl;
src<<"line two of source file."<<endl;
src.close();

ifstream fin("source.txt");
ofstream fout("destination.txt");
char ch;
while(fin.get(ch)) fout.put(ch);
fin.close();
fout.close();
cout<<"file copied to destination.txt"<<endl;

ifstream check("destination.txt");
string line;
while(getline(check,line)) cout<<line<<endl;
check.close();
}

//Q5
void q5()
{
string input;
cout<<"enter a string: ";
cin>>input;
cout<<"length: "<<input.length()<<endl;

ofstream fout("chars.txt");
fout<<input;
fout.close();

cout<<"stored characters: ";
ifstream fin("chars.txt");
char ch;
while(fin.get(ch)) cout<<ch;
cout<<endl;
fin.close();
}

//Q6
void q6()
{
ofstream fout("seek.txt");
fout<<"abcdefghij";
cout<<"write position after writing (tellp): "<<fout.tellp()<<endl;
fout.seekp(5);
fout<<"XYZ";
fout.close();

ifstream fin("seek.txt");
cout<<"initial read position (tellg): "<<fin.tellg()<<endl;
fin.seekg(0, ios::end);
cout<<"end position (tellg): "<<fin.tellg()<<endl;
fin.seekg(0, ios::beg);
string content;
getline(fin, content);
cout<<"file content: "<<content<<endl;
fin.seekg(3);
cout<<"char at position 3: "<<(char)fin.get()<<endl;
fin.close();
}

int main()
{
int choice;
cout<<"enter question number (1-6): ";
cin>>choice;
switch(choice)
{
case 1: q1(); break;
case 2: q2(); break;
case 3: q3(); break;
case 4: q4(); break;
case 5: q5(); break;
case 6: q6(); break;
default: cout<<"invalid"<<endl;
}
return 0;
}
