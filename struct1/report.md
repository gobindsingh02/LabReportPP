[Home of Lab Report](../lab.html)

# Program Ex 11: Display content of Structure

## Discussion

A structure (`struct`) is a user-defined datatype which is collection of variables (can be of different types) under a single name. Syntax for definig a structure is as follows:  
```
struct structurename{
  datatype1 var1;
  datatype2 var2;
}
```
When a struct type is declared, no storage or memory is allocated. To allocate memory of a given structure type and work with it, we need to create variables. Syntax of it is as follows:  
```
struct structurename svar1, sver2, svar3;
```  
Here, there can be ant no. of variables having type `struct structurename`.  
To print/access members of the structure we need to use member operator which is (`.`) so, syntax to access member is like, `svar1.var1`, `svar1.var2`, `svar2.var1` etc.


## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

#include <stdio.h>
int main(void)
{
printf("Anirudh Verma\nME-A1 2030009\n\n");
struct student
{ char name[50];
int rollno;
};
struct student s1={"Anirudh Verma",2030009};
printf("Name: %s\nRoll No.: %d\n",s1.name,s1.rollno);
return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release struct1
[100%]: build ok!

```

## Execution
```
xmake run

Anirudh Verma
ME-A1 2030009

Name: Anirudh Verma
Roll No.: 2030009

```

### Known Bugs and/or Errors:

No known bugs.

### Lessons Learned:

1. What is structure? It comes under which datatype?
2. How to define structure?
3. How to create variables for a structure?
4. How to access members of a structure?
