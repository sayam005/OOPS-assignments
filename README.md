# OOPS Assignments

Name: Sayam Batra
Roll Number: 1024150252
Batch: 2O33

assignment 1 is in [assignment1.cpp](assignment1.cpp)

all 10 programs are in the same file, separated by comments (Q1 through Q10). run the file and enter a question number from 1 to 10 to execute that program.

Q1 - hello world
output:
```
Hello World
```

Q2 - input and display int, float, char
sample input: 5, 3.14, A
output:
```
Integer: 5
Decimal: 3.14
Character: A
```

Q3 - arithmetic operations
sample input: 10 2
output:
```
Addition: 12
Subtraction: 8
Multiplication: 20
Division: 5
```

Q4 - celsius to fahrenheit
sample input: 100
output:
```
Temperature in Fahrenheit: 212
```

Q5 - console formatting using \t \n \b endl setw
output:
```
Hello   World
New
Line
Backspace
     Right
Done
```

Q6 - assignment operators += and -=
sample input: 20
output:
```
Original: 20
After +=10: 30
After -=5: 25
```

Q7 - swap two numbers using bitwise xor
sample input: 4 9
output:
```
Before swap: a=4 b=9
After swap: a=9 b=4
```

Q8 - library fine problem
sample inputs and outputs:
```
3 days  -> Fine: 50 paise
8 days  -> Fine: 1 rupee
15 days -> Fine: 5 rupees
35 days -> Membership cancelled.
```

Q9 - arithmetic using switch case
sample input: choice 1, numbers 6 and 3
output:
```
Result: 9
```

Q10 - even or odd using if-else and conditional operator
sample input: 8
output:
```
Even (if-else)
Even (conditional operator)
```
sample input: 7
output:
```
Odd (if-else)
Odd (conditional operator)
```

assignment 2 is in [assignment2.cpp](assignment2.cpp)

all 7 programs are in the same file, separated by comments (Q1 through Q7). run the file and enter a question number from 1 to 7.

Q1 - student structure with addDetails, updateDetails, updateCGPA, updateHostel, displaydetails
sample input: Sayam 101 BTech LH4 8.5
output:
```
Name: Sayam
Roll No: 101
Degree: BTech
Hostel: LH4
CGPA: 8.5
```

Q2 - same as Q1 but using class with private data members and public functions
output: same as Q1

Q3 - private function called inside public function
output:
```
inside public function
private function called
```

Q4 - rectangle class with getdata and calculatearea
sample input: width=5, height=3
output:
```
area = 15
```

Q5 - complex number class with setComplex, displayComplex, and sum of two complex numbers
sample input: 3 4 then 1 2
output:
```
sum = 4+6i
```

Q6 - scope resolution operator for class functions outside class, global vs local variable, static variable, inbuilt library
output:
```
local x = 10
global x = 100
static count = 5
using scope resolution with cout
```

Q7 - namespace with same variable and function names in different namespaces
output:
```
first namespace val = 10
second namespace val = 20
first val = 10
second val = 20
```

assignment 3 is in [assignment3.cpp](assignment3.cpp)

all 7 programs are in the same file, separated by comments (Q1 through Q7). run the file and enter a question number from 1 to 7.

Q1 - pointer to object and this pointer using dot and arrow operators
sample output:
```
dot operator: 10
arrow operator: 10
this pointer address: 0x....
length via this: 10
```

Q2 - swap private values of two classes using friend function
output:
```
before swap
ClassA val: 5
ClassB val: 10
after swap
ClassA val: 10
ClassB val: 5
```

Q3 - add data objects of two different classes using friend function
output:
```
sum = 40
```

Q4 - friend class demonstration
output:
```
engine horsepower: 200
```

Q5 - array of objects to display area of multiple rectangles
sample input: 2 rectangles, (5,3) and (4,6)
output:
```
rectangle 1 area = 15
rectangle 2 area = 24
```

Q6 - inline function cube()
sample input: 3
output:
```
cube = 27
```

Q7 - pass object by value and by address
output:
```
pass by value result: 10
original unchanged: 5
pass by address result: 10
original changed: 10
```

assignment 4 is in [assignment4.cpp](assignment4.cpp)

all 4 programs are in the same file, separated by comments (Q1 through Q4). run the file and enter a question number from 1 to 4.

Q1 - rectangle class with three constructors (no param, two param, one param)
output:
```
no parameter: area = 0
two parameters: area = 15
one parameter: area = 16
```

Q2 - array of rect objects using default argument constructor and destructor
output:
```
rect 1 area = 1
rect 2 area = 15
rect 3 area = 16
destructor called for rect  (fires 6 times as objects go out of scope)
```

Q3 - destructor demonstration showing constructor/destructor call order
output:
```
creating object d1
constructor called
creating object d2
constructor called
end of q3 scope, destructors will fire
destructor called
destructor called
```

Q4 - dynamic memory allocation using new and delete for int, float, int array, float array, class object, array of objects
output:
```
dynamic int: 10
dynamic float: 3.14
dynamic int array: 1 2 3 4 5
dynamic float array: 1.1 2.2 3.3
sample constructor called
dynamic object x: 42
sample destructor called
sample constructor called (x2 for array)
dynamic array of objects: 1 2
sample destructor called (x2)
```
