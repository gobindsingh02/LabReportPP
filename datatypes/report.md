[Home of Lab Report](../lab.html)

# Program Ex 05: Program to use different datatypes

## Discussion

There are 3 types of datatypes in C which are Primary, Derieved and Userdefiined. Primary datatypes are those datatypes which are predefined (built-in) in C language. Under primary comes integer (`int`), character (`char`), floating point (`float`), double floating point (`double`) and few more. So, in this exercise we are going to use `int`, `char`, `float`, `double` (`double` has just double precision than `float` as storage size of `double` is double than that of `float`). 
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
  int a=9,b=12,c=15;
  float A=3.14,B=9.009,C=25.6789;
  char var1='X',var2='Y',var3='Z';
  printf("\nAnirudh Verma\nME-A1 2030009\n\n");
  printf("Examples for integers:- %d, %d, %d\n",a,b,c);
  printf("Examples for floats:- %f, %f, %f\n",A,B,C);
  printf("Examples for characters:- %c, %c, %c\n\n",var1,var2,var3);
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


Anirudh Verma
ME-A1 2030009

Examples for integers:- 9, 12, 15
Examples for floats:- 3.140000, 9.009000, 25.678900
Examples for characters:- X, Y, Z


```

### Known Bugs and/or Errors:

No known bugs, till now.

### Lessons Learned:

1. Types of datatypes.
2. What is primary datatypes? Which datatypes come under it?
3. How to declare variables of different datatype?
4. Format specifiers of different datatypes.
