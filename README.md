# C++ Function Overloading
How to overload a function in C++
In C++ programming, two functions can have same identifier(name) if either number of arguments or type of arguments passed to functions are different. These types of functions having similar name are called overloaded functions.

```
/* Example of function overloading */ 

int test() { } 
int test(int a){ } 
int test(double a){ } 
int test(int a, double b){ }
```

All 4 functions mentioned above are overloaded function. It should be noticed that, the return type of all 4 functions is same,i.e, int. **Overloaded function may or may not have different return type but it should have different argument**(either type of argument or numbers of argument passed). Two functions shown below are not overloaded functions because they only have same number of arguments and arguments in both functions are of type int.

```
/* Both functions has same number of argument and same type of argument*/ 
/* Hence, functions mentioned below are not overloaded functions. */ 
/* Compiler shows error in this case. */ 

int test(int a){ } 
double test(int b){ }
```

## Example 1: Function Overloading
```
/*Calling overloaded function test() with different argument/s.*/ 

#include <iostream> 
using namespace std; 
void test(int); 
void test(float); 
void test(int, float); 
int main() { 
  int a = 5; 
  float b = 5.5; 
  
  test(a); 
  test(b); 
  test(a, b); 
  
  system("pause"); 
  return 0; 
} 

void test(int var) { 
  cout<<"Integer number: "<<var<<endl; 
} 

void test(float var){ 
  cout<<"Float number: "<<var<<endl; 
} 

void test(int var1, float var2) { 
  cout<<"Integer number: "<<var1; cout<<" And float number:"<<var2<<endl; 
}
```

### Output
```
Integer number: 5
Float number: 5.5
Integer number: 5 And float number: 5.5
```

In above example, function test( ) is called with integer argument at first. Then, function test() is called with floating point argument and finally it is called using two arguments of type int and float. Although the return type of all these functions is same, that is, void, it's not mandatory to have same return type for all overloaded functions. This can be demonstrated by example below.

## Example 2: Function Overloading
```
/* C++ Program to return absolute value of variable types 
  integer and float using function overloading */ 

#include <iostream>
using namespace std;

int absolute(int);
float absolute(float);
int main() { 
  int a = -5; 
  float b = 5.5; 
  cout<<"Absolute value of "<<a<<" = "<<absolute(a)<<endl; 
  cout<<"Absolute value of "<<b<<" = "<<absolute(b) <<endl; 
  
  system("pause"); 
  return 0; 
} 

int absolute(int var) { 
  if (var < 0) 
    var = -var; 
  return var; 
} 

float absolute(float var){ 
  if (var < 0.0) 
    var = -var; 
  return var; 
}
```

### Output
```
Absolute value of -5 = 5
Absolute value of 5.5 = 5.5
```
In above example, two functions absolute( ) are overloaded. Both take single argument but one takes integer type argument and other takes floating point type argument. Function absolute() calculates the absolute value of argument passed and returns it. Notice both overloaded functions' return types are different.
