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
void q2()
{
ifstream fin("NOTES.TXT");
if(!fin)
{
ofstream tmp("NOTES.TXT");
tmp<<"Hello World 123! This is a test file for Assignment 9.";
tmp.close();
fin.open("NOTES.TXT");
}
int count=0;
char ch;
while(fin.get(ch)) if(isalpha(ch)) count++;
fin.close();
cout<<"number of alphabets: "<<count<<endl;
}

//Q3
void q3()
{
ofstream src("source.txt");
src<<"this is source file line one."<<endl;
src<<"this is source file line two."<<endl;
src.close();

ifstream fin("source.txt");
ofstream fout("destination.txt");
char ch;
while(fin.get(ch)) fout.put(ch);
fin.close();
fout.close();
cout<<"copied source.txt to destination.txt"<<endl;

ifstream check("destination.txt");
string line;
while(getline(check,line)) cout<<line<<endl;
check.close();
}

//Q4
void q4()
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

//Q5
void q5()
{
ofstream fa("az.txt");
for(char c='A';c<='Z';c++) fa<<c;
fa.close();

ifstream fa2("az.txt");
fa2.seekg(9);
cout<<"(a) 10th character: "<<(char)fa2.get()<<endl;
fa2.close();

ofstream fb("nums.txt");
for(int i=1;i<=10;i++) fb<<i<<" ";
fb.close();

fstream fb2("nums.txt", ios::in|ios::out);
fb2.seekp(8);
fb2<<"99";
fb2.close();

ifstream fb3("nums.txt");
string content;
getline(fb3, content);
cout<<"(b) after overwrite: "<<content<<endl;
fb3.close();

ifstream fc("az.txt");
fc.seekg(0, ios::end);
cout<<"(c) file size of az.txt: "<<fc.tellg()<<" bytes"<<endl;
fc.close();

ifstream fd("az.txt");
fd.seekg(-1, ios::end);
cout<<"(d) last character: "<<(char)fd.get()<<endl;
fd.close();

ofstream fe("data.txt");
fe<<"Line one of data file."<<endl;
fe<<"Line two of data file."<<endl;
fe<<"Line three of data file."<<endl;
fe.close();

ifstream fe2("data.txt");
fe2.seekg(10);
cout<<"(e) position after seekg(10): "<<fe2.tellg()<<endl;
string rem;
cout<<"remaining content:"<<endl;
while(getline(fe2, rem)) cout<<rem<<endl;
fe2.close();
}

//Q6
void q6()
{
fstream f("hello.txt", ios::out);
string text = "Hello World";
cout<<"(ii) put pointer positions while writing:"<<endl;
for(char c : text)
{
f.put(c);
cout<<"wrote '"<<c<<"' -> tellp: "<<f.tellp()<<endl;
}
f.close();

fstream f2("hello.txt", ios::in|ios::out);
f2.seekp(6);
f2<<"C++  ";
f2.close();

ifstream f3("hello.txt");
string result;
getline(f3, result);
cout<<"(iii) after replace: "<<result<<endl;
f3.close();
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
