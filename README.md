# cBasics

This repository was created to share basic projects in C for study and tests purposes.

## Basic concepts

This section presents summary and notes on the reading of the book __C, The Complete Reference__ by Herbert Schildt, among other references like  [this article from Geeks for Geeks site](https://www.geeksforgeeks.org/c/structure-of-c-program/).

### C Program compilation

According to Schildt, C program compilation to create the executable consists of three steps:
1. Creating the program
1. Compiling the program
1. Linking the program with the functions needed from the library

The general form of a C program looks like this:

```
Global declarations

int main(parameter list)
{
    statement sequence
}

return-type f1 (parameter list)
{
    statement sequence
}

return-type f2 (parameter list)
{
    statement sequence
}
.
.
.
return-type fN (parameter list)
{
    statement sequence
}
```

This form can be broken down into the following six main sections:
1. Documentation
1. Preprocessor Section
1. Definition
1. Global Declaration
1. Main() Function
1. Sub Programs

### 1. Documentation

Contains the description of the program, specified in the form of comments:

```
// description, name of the program, programmer name, date, time etc.
```

or

```
/*
    description, name of the program, programmer name, date, time etc.
*/
```

### 2. Preprocessor section

Contains the header files of the program, which help us to access other's code into our code. Example:

```
#include<stdio.h>
#include<math.h>
```

### 3. Definition

The `#define` preprocessor is used to create a constant throughout the program. Whenever this name is encountered by the compiler, it is replaced by the actual piece of defined code. Example:

```
#define long long ll
```

### 4. Global declaration

The global declaration section contains global variables, function declaration, and static variables. Variables and functions which are declared in this scope can be used anywhere in the program. Example:

```
int num = 18;
```

### 5. Main() function

Every C program must have a main function. Operations like declaration and execution are performed inside the curly braces of the main program. The return type of the main() function can be int as well as void too. void() main tells the compiler that the program will not return any value. The int main() tells the compiler that the program will return an integer value. Examples:

```
void main()
```

or

```
int main()
```

### 6. Sub programs

User-defined functions are called in this section of the program. The control of the program is shifted to the called function whenever they are called from the main or outside the main() function, as per requirements of the programmer. Example:

```
int sum(int x, int y)
{
    return x+y;
}
```

### Complete example of a C program

[The article from Geeks for Geeks site](https://www.geeksforgeeks.org/c/structure-of-c-program/) brings this full example of a C program to find the sum of 2 numbers, containing the sections mentioned above:

```
// Documentation
/**                     
 * file: sum.c
 * author: you
 * description: program to find sum.
 */

// Link
#include <stdio.h>      

// Definition
#define X 20 

// Global Declaration
int sum(int y);   

// Main() Function
int main(void)       
{
  int y = 55;
  printf("Sum: %d", sum(y));
  return 0;
}

// Subprogram
int sum(int y) 
{
  return y + X;
}
```

Output:

```
Sum: 75
```

### Review of terms

As summarized by Schildt:

* _Source code:_ The text of a program that the user can read. The source code is input into the C compiler.

* _Object code:_ Translation of the source code of a program into a machine code, which the computer can read and execute directly. Object code is the input to the linker.

* _Linker:_ A program that links the separately compiled modules into one program. It also combines the functions in the Standard C library with the code that you wrote. The output of the linker is the executable program.

* _Library:_ The file containing the standard functions that your program can use. There functions include all I/O operations as well as other useful routines.

* _Compile time:_ The time during which your program is being compiled.

* _Run time:_ The time during which your program is executing.
