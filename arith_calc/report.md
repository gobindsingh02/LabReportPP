[Home of Lab Report](../lab.html)

# Program Ex 04: Program to do Arithmetic Calculations

## Discussion

Arithmetic operators are those operators which  performs mathematical operations such as addition(+), subtraction(-), multiplication(*), division(/) etc on numerical values (constants and variables). So, there are following arithmatic operators in C.

| Operator Symbol | Meaning of Operator |
| :-------- | :------------------- |
| + | Addition or unary plus |
| - | Subtraction or unary minus |
| * | Multiplication |
| / | Division |
| % | Remainder after integer division (modulo) |

And to print `int` values within strings we need to use format specifier of `int` datatype which is `%d` or `%i` and the use of it is illustrated in program code.

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
  int a=15,b=33;
  int c=a+b;
  printf("\nAnirudh Verma\nME-A1 2030009\n\n");
  printf("Value of a is %d\nValue of b is %d\nThe result for a+b=c and value of c is %d\n\n",a,b,c);
  return 0;
}

```

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release arith_calc
[100%]: build ok!

```

## Execution
```
xmake run


Anirudh Verma
ME-A1 2030009

Value of a is 15
Value of b is 33
The result for a+b=c and value of c is 48


```

### Known Bugs and/or Errors:

Can't perform big calculations which have results greater than 2,147,483,647 or less than -2,147,483,648 
as `int` datatype has storage size of 4 bytes (i.e. 32 bits) within which 1 bit is used to store sign of thhe integer. So, 
31 bits are used to store magnitude. Thus range will be from -2³¹ to 2³¹-1.

### Lessons Learned:

1. What are arithmetic operators? Types of Arithmetic Operators in C amd their Symbols.
2. Format Specifiers of  `int` datatype.
3. Perform Arithmetic Calculations in C.
