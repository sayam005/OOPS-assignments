# OOPS Assignments

Name: Sayam Batra
Roll Number: 1024150252
Batch: 2O33

## Assignment 1 — Basics

All 10 programs are in [assignment1.cpp](assignment1.cpp). Run and enter a question number from 1 to 10.

**Q1 — Hello World**
```
Hello World
```

**Q2 — Input and display int, float, char**
Sample input: `5 3.14 A`
```
Integer: 5
Decimal: 3.14
Character: A
```

**Q3 — Arithmetic operations**
Sample input: `10 2`
```
Addition: 12
Subtraction: 8
Multiplication: 20
Division: 5
```

**Q4 — Celsius to Fahrenheit**
Sample input: `100`
```
Temperature in Fahrenheit: 212
```

**Q5 — Console formatting using \t \n \b endl setw**
```
Hello   World
New
Line
Backspace
     Right
Done
```

**Q6 — Assignment operators += and -=**
Sample input: `20`
```
Original: 20
After +=10: 30
After -=5: 25
```

**Q7 — Swap two numbers using bitwise XOR**
Sample input: `4 9`
```
Before swap: a=4 b=9
After swap: a=9 b=4
```

**Q8 — Library fine problem**
```
3 days  -> Fine: 50 paise
8 days  -> Fine: 1 rupee
15 days -> Fine: 5 rupees
35 days -> Membership cancelled.
```

**Q9 — Arithmetic using switch case**
Sample input: choice `1`, numbers `6` and `3`
```
Result: 9
```

**Q10 — Even or odd**
Sample input: `8`
```
Even (if-else)
Even (conditional operator)
```
Sample input: `7`
```
Odd (if-else)
Odd (conditional operator)
```

## Assignment 2 — Structures and Classes

All 7 programs are in [assignment2.cpp](assignment2.cpp). Run and enter a question number from 1 to 7.

**Q1 — Student structure with add/update/display**
Sample input: `Sayam 101 BTech LH4 8.5`
```
Name: Sayam
Roll No: 101
Degree: BTech
Hostel: LH4
CGPA: 8.5
```

**Q2 — Student class with private data members and public functions**
Same output as Q1.

**Q3 — Private function called inside a public function**
```
inside public function
private function called
```

**Q4 — Rectangle class with getdata and calculatearea**
Sample input: `5 3`
```
area = 15
```

**Q5 — Complex number class with sum of two complex numbers**
Sample input: `3 4` then `1 2`
```
sum = 4+6i
```

**Q6 — Scope resolution operator, global vs local variable, static variable**
```
local x = 10
global x = 100
static count = 5
using scope resolution with cout
```

**Q7 — Namespace with same names in different namespaces**
```
first namespace val = 10
second namespace val = 20
first val = 10
second val = 20
```

## Assignment 3 — Pointers, Friend Functions, Inline

All 7 programs are in [assignment3.cpp](assignment3.cpp). Run and enter a question number from 1 to 7.

**Q1 — Pointer to object and this pointer using dot and arrow operators**
```
dot operator: 10
arrow operator: 10
this pointer address: 0x...
length via this: 10
```

**Q2 — Swap private values of two classes using friend function**
```
before swap
ClassA val: 5
ClassB val: 10
after swap
ClassA val: 10
ClassB val: 5
```

**Q3 — Add data of two different class objects using friend function**
```
sum = 40
```

**Q4 — Friend class accessing private members**
```
engine horsepower: 200
```

**Q5 — Array of Rectangle objects, input and display areas**
Sample input: 2 rectangles `(5,3)` and `(4,6)`
```
rectangle 1 area = 15
rectangle 2 area = 24
```

**Q6 — Inline function cube()**
Sample input: `3`
```
cube = 27
```

**Q7 — Pass object by value and by address**
```
pass by value result: 10
original unchanged: 5
pass by address result: 10
original changed: 10
```

## Assignment 4 — Constructors, Destructors, Dynamic Memory

All 4 programs are in [assignment4.cpp](assignment4.cpp). Run and enter a question number from 1 to 4.

**Q1 — Rectangle class with three constructors (no param, two param, one param)**
```
no parameter: area = 0
two parameters: area = 15
one parameter: area = 16
```

**Q2 — Array of Rect objects using default argument constructor and destructor**
```
rect 1 area = 1
rect 2 area = 15
rect 3 area = 16
destructor called for rect
destructor called for rect
destructor called for rect
```
The destructor fires 6 times total — 3 for the local copies and 3 for the array elements going out of scope.

**Q3 — Destructor demonstration showing constructor/destructor call order**
```
creating object d1
constructor called
creating object d2
constructor called
end of q3 scope, destructors will fire
destructor called
destructor called
```

**Q4 — Dynamic memory allocation using new and delete**
```
dynamic int: 10
dynamic float: 3.14
dynamic int array: 1 2 3 4 5
dynamic float array: 1.1 2.2 3.3
sample constructor called
dynamic object x: 42
sample destructor called
sample constructor called
sample constructor called
dynamic array of objects: 1 2
sample destructor called
sample destructor called
```

## Assignment 5 — Inheritance

All 10 programs are in [assignment5.cpp](assignment5.cpp). Run and enter a question number from 1 to 10.

**Q1 — Simple base class Animal and derived class Dog**
```
animal makes a sound
animal makes a sound
dog barks
```

**Q2 — Protected access specifier in inheritance**
```
protected x from base: 42
```

**Q3 — Public, protected, and private inheritance modes**
```
public inheritance
pub accessible: 1
prot accessible: 2
protected inheritance
pub now protected: 1
prot still protected: 2
private inheritance
pub now private: 1
prot now private: 2
```

**Q4 — All five types of inheritance**
```
single:
class A
class B
multiple:
class A
class B (multiple)
class C inherits A and B
hierarchical:
class A
class B
class A
class C (hierarchical)
class A
class D (hierarchical)
multilevel:
A (multilevel)
B (multilevel)
C (multilevel)
hybrid:
class A
B (hybrid)
C (hybrid)
D inherits B and C (hybrid)
```

**Q5 — Constructors and destructors in inheritance**
```
creating derived object:
base constructor
derived constructor
going out of scope:
derived destructor
base destructor
```

**Q6 — Book base class and Textbook derived class**
```
book details:
title: Novel
author: AuthorA
price: 299
textbook details:
title: Physics
author: AuthorB
price: 499
subject: Science
```

**Q7 — Car dashboard using multiple inheritance**
```
--- car dashboard ---
speed: 80 kmph
fuel: 60%
temperature: 90C
```

**Q8 — Library user system using hierarchical inheritance**
```
student:
name: Sayam
id: 1
contact: 9999999999
grade: A
teacher:
name: Mr.Sharma
id: 2
contact: 8888888888
department: CS
```

**Q9 — Vehicle fleet using multilevel inheritance**
```
make: Volvo model: FH year: 2022
load capacity: 20.5 tons
temp control: -18C
```

**Q10 — Academic system using hybrid inheritance with virtual base class**
```
teaching assistant details:
name: Rahul address: Delhi
empid: 101 dept: CS
studentid: 201 grade: A
```

## Assignment 6 — Array of Objects, this Pointer, Static/Const, Inline

All 5 programs are in [assignment6.cpp](assignment6.cpp). Run and enter a question number from 1 to 5.

**Q1 — Library class with array of Book objects, functions defined outside class using ::**
```
all books:
title: C++ Primer author: Lippman isbn: 111
title: CLRS author: Cormen isbn: 222
title: Clean Code author: Martin isbn: 333
title: SICP author: Abelson isbn: 444
title: DDIA author: Kleppmann isbn: 555
after removing isbn 333:
title: C++ Primer author: Lippman isbn: 111
title: CLRS author: Cormen isbn: 222
title: SICP author: Abelson isbn: 444
title: DDIA author: Kleppmann isbn: 555
```

**Q2 — Book2 with default, parameterized, and copy constructors. this pointer used throughout. both initializer list and dynamic array init shown**
```
copy constructor: C++ Primer
initializer list:
CLRS
SICP

dynamic init:
Clean Code
DDIA
library books:
title: Book1 author: Auth1 isbn: 001
title: Book2 author: Auth2 isbn: 002
title: Book3 author: Auth3 isbn: 003
title: Book4 author: Auth4 isbn: 004
title: Book5 author: Auth5 isbn: 005
after remove:
title: Book1 author: Auth1 isbn: 001
title: Book3 author: Auth3 isbn: 003
title: Book4 author: Auth4 isbn: 004
title: Book5 author: Auth5 isbn: 005
```

**Q3 — Account class with const account number, const displayDetails function, scope resolution for cout/endl**
```
transaction id: 1001
transaction id: 1001
account details:
account: 1001 balance: 5500 last transaction: debit
account: 1002 balance: 2500 last transaction: credit
account: 1003 balance: 7000 last transaction: none
account: 1004 balance: 2000 last transaction: none
account: 1005 balance: 9000 last transaction: none
```

**Q4 — Add objects of two different classes using friend function**
```
sum = 40
```

**Q5 — Complex class with parameterized constructor, copy constructor, display, and friend sum function**
```
c1: 3+4i
c2 (copy): 3+4i
sum = 4+6i
```

## Assignment 7 — Polymorphism, Virtual Functions, Operator Overloading

All 13 programs are in [assignment7.cpp](assignment7.cpp). Run and enter a question number from 1 to 13.

**Q1 — Polygon base class with virtual calculate_area, Rectangle and Triangle derived, base class pointer used**
```
rectangle area: 20
triangle area: 10
```

**Q2 — Abstract Shape class with pure virtual area and display, derived Circle, Rectangle, Triangle**
```
circle radius=5 area=78.5397
rectangle l=4 b=6 area=24
triangle base=3 height=8 area=12
```

**Q3 — Function overloading for right-angle, equilateral, isosceles triangle areas**
```
right angle triangle area: 6
equilateral triangle area: 10.8253
isosceles triangle area: 12
```

**Q4 — Abstract Student class, derived Engineering, Medicine, Science, array of base pointers**
```
Engineering student: Sayam
Medicine student: Rahul
Science student: Priya
```

**Q5 — Time class with overloaded + operator**
```
time: 15h 9m 32s
```

**Q6 — STRING class with overloaded == and + operators**
```
strings are equal
hello world
```

**Q7 — Matrix class with overloaded * as friend function (2x2 matrix multiplication)**
```
matrix product:
19 22
43 50
```

**Q8 — SafeArray with overloaded [] that checks bounds at runtime**
```
arr[2]: 20
index 7 out of bounds
arr[7]: -1
```

**Q9 — Box class with overloaded () operator to set dimensions**
```
box: 3x4x5
```

**Q10 — Point class with overloaded >> and << operators**
Sample input: `3 5`
```
enter x and y: 3 5
point: (3,5)
```

**Q11 — Convert float to user-defined type using conversion constructor**
```
converted float 3.14 to object
value: 3.14
```

**Q12 — Convert user-defined type to float using conversion operator**
```
converting object to float
float value: 2.71
```

**Q13 — Convert Polar to Cartesian using conversion constructor**
```
x=2.83662 y=-9.58924
```

## Assignment 8 — File I/O

All 6 programs are in [assignment8.cpp](assignment8.cpp). Run and enter a question number from 1 to 6.

**Q1 — Write numbers 1 to 200 to NUM.TXT**
```
written 1 to 200 in NUM.TXT
```

**Q2 — Read NOTES.TXT and count alphabets**
```
number of alphabets: 38
```
Creates a sample NOTES.TXT automatically if the file is not found.

**Q3 — Binary I/O — write and read a Student object to a .dat file**
```
read from binary file:
name: Sayam roll: 101 cgpa: 8.5
```

**Q4 — Copy source.txt to destination.txt char by char**
```
copied source.txt to destination.txt
this is the source file content.
line two of source file.
```

**Q5 — String I/O — input string, store in file, fetch back**
Sample input: `hello`
```
length: 5
stored characters: hello
```

**Q6 — File pointers using seekp, seekg, tellp, tellg**
```
write position after writing (tellp): 10
end position (tellg): 10
file content: abcdeXYZij
char at position 3: d
```

## Assignment 9 — File Management

All 6 programs are in [assignment9.cpp](assignment9.cpp). Run and enter a question number from 1 to 6.

**Q1 — Write numbers 1 to 200 to NUM.TXT**
```
written 1 to 200 in NUM.TXT
```

**Q2 — Read NOTES.TXT and count alphabets**
```
number of alphabets: 51
```
Creates a sample NOTES.TXT automatically if the file is not found.

**Q3 — Copy source.txt to destination.txt**
```
copied source.txt to destination.txt
this is source file line one.
this is source file line two.
```

**Q4 — String I/O — input string, get length, store, fetch back**
Sample input: `assignment9`
```
length: 11
stored characters: assignment9
```

**Q5 — seekg, seekp, tellg, tellp sub-parts**
```
(a) 10th character: J
(b) after overwrite: 1 2 3 4 99 6 7 8 9 10
(c) file size of az.txt: 26 bytes
(d) last character: Z
(e) position after seekg(10): 10
remaining content:
one of data file.
Line two of data file.
Line three of data file.
```

**Q6 — tellp after each char written, then replace World with C++ using seekp**
```
(ii) put pointer positions while writing:
wrote 'H' -> tellp: 1
wrote 'e' -> tellp: 2
wrote 'l' -> tellp: 3
wrote 'l' -> tellp: 4
wrote 'o' -> tellp: 5
wrote ' ' -> tellp: 6
wrote 'W' -> tellp: 7
wrote 'o' -> tellp: 8
wrote 'r' -> tellp: 9
wrote 'l' -> tellp: 10
wrote 'd' -> tellp: 11
(iii) after replace: Hello C++
```
