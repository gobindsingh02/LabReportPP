[Home of Lab Report](../lab.html)

# Program Ex 05: Program to use different datatypes

## Discussion

In C language under primary datatype comes integer, character, float, double. So, in this exercise we are going to use `int`, `char`, `float`, `double` (`double` has just double precision than `float` as storage size of `double` is double than that of `float`). 
We also need to use different format specifiers to print different datatypes. So, for `int` it is `%d`, for `char` is `%s` , for `float` is `%f` and for `double` it is `%lf`.

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
int main(void){
  int a=10,b=11,c=12;
  float A=4.14,B=9.009,C=25.6789;
  char var1='X',var2='Y',var3='Z';
  printf("\nME-A1 2030025\n\n");
  printf("Integers:- %d, %d, %d\n",a,b,c);
  printf("Floats:- %f, %f, %f\n",A,B,C);
  printf("Characters:- %c, %c, %c\n\n",var1,var2,var3);
  return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release datatypes
[100%]: build ok!

```

## Execution
```
xmake run


ME-A1 2030025

Integers:- 10, 11, 12
Floats:- 4.140000, 9.009000, 25.678900
Characters:- X, Y, Z


```

### Known Bugs and/or Errors:

No known bugs, till now.

### Lessons Learned:

1. Types of datatypes.
2. What is primary datatypes? Which datatypes come under it?
3. How to declare variables of different datatype?
4. Format specifiers of different datatypes.
