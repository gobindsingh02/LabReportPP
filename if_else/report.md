[Home of Lab Report](../lab.html)

# Program Ex 07: Program to use If-else conditional statements 

## Discussion

Sometimes or many times we require the execution of a statement or a block of statements if a condition is true. SO, for that c language has if-else sttements. Syntax of which is,
```
if (condition1) {
  block of statement(s)(1);
}
else if (condition2) {
  block of statement(s)(2);
else {
  block of statements(s)(3);
```
In this syntax, we need to specifiy a boolean expression (expression which results bool value i.e. `true` or `false`) as condition(s) and for each condition there are block of statement(s) can be based on your program and are executed if the conditon belonging to it is true. There can be any no. of `else if` statements between `if` and 'else` part. Moreover, `else if` and `else` part is optional and we need not specify any condition for `else` part, if present in your program code. `else` part is executed when no condition is `true` in above `if` and `else if` part(s). Compiler will check condition starting from `if` part and moving on to `else if` part(s) in order (top to bottom), if it finds any condition true, then it executes the block of statements coressponding to that condition and then skips all the conditions, moving  on to next set of statements.
 
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
{   printf("\nAnirudh Verma\nME-A1 2030009\n\n");
    int a=6,b=6;
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
    if (a>b)
    {printf("a is greater than b\n\n");}
    else if (b>a)
    {printf("a is smaller than b\n\n");}
    else
    {printf("a is equal to b\n\n",b,a);} 
    printf("End of if-else.\n\n");
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release if_else
[100%]: build ok!

```

## Execution
```
xmake run


Anirudh Verma
ME-A1 2030009

Value of a is 6
Value of b is 6
a is equal to b

End of if-else.


```

### Known Bugs or Errors and Limitations:

#### Limitations

Program doesn't read values from user to compare.

### Lessons Learned:

1. What are conditional statements? Syntax of it. 
2. What is boolean expression?
3. Use of boolean expressions in `if-else` statements.
