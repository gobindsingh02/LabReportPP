[Home of Lab Report](../lab.html)

# Program Ex 10: Print a right-angled triangle pattern using nested for loop

## Discussion

In previous exercise we discussed about `for` loop. Now we are going to use a `for` loop inside a `for` loop such loop is called nested loops and as this loop is of `for`, it is called nested `for` loop. And the inner loop is called child loop and the outer loop is called parent loop. So, if parent loop's body is executed `n` times then child loop will be executed `n` times. And if child loop's body is executed `m` times with one execution of `for` loop then totally there will be `m*n` executions of the body of child loop. General syntax for nested `for` loop is:  
```
for (initialisation1; condition1; updatation1){
  block os statements1;
  for (initilisation2; condition2; updatation2){
    block of statements2;
  }
}
```

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
{  printf("ME-A1 2030025\n\n");
    for (int a=1; a<=10; a++)
     {for (int b=1; b<=a; b++)
       {printf("*");}
     printf("\n");
     }
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release pattern
[100%]: build ok!

```

## Execution
```
xmake run

ME-A1 2030025

*
**
***
****
*****
******
*******
********
*********
**********

```

### Known Bugs and Limitations:

Currently, no known bugs.  
Size of the triangle is not decided by the user.

### Lessons Learned:

1. What does nested loop means?
2. Syntax of nested `for` loop.
3. Use of nested `for` loop.
