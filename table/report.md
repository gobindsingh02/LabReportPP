[Home of Lab Report](../lab.html)

# Program Ex 09: Print multiplication table using for loop

## Discussion

A loop is used to repeat a set of statement(s) until the condition becomes false or till the condition is true. One of the loop that C language provides is `for` loop. Its syntax is as follows:  

```
for (intialization; condition; updatation) {
  block of statements;
}
```
Initialisation means we have to initialze a variable with a initial value. Condition should be a boolean expression on the initialized variable. Updatation is for the initialised variable so that the condition is true for a no. of iterations and the condition becomes false at a point and the loop stops. So, the loop is executed till the condition is true and it condition is checked everytime before execution of block of statements and updatation is carried out at the end of execution of block of statements.  
So, `for` loops can be used to ease the task. We need not type the statements repeatedly, so mant times. Just type once and for loop will handle it. One such example is to print multiplication table which is illustrated below.

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
{   printf("Anirudh Verma\nME-A1 20300009\n\n");
    int t;
    printf("Enter the number of which you want to print table:- ");
    scanf("%d",&t);
    for (int i=1; i<=10; i++)
     {printf("%d * %2d = %d\n",t,i,i*t);}
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release table
[100%]: build ok!

```

# input.dat

```

34

```

---


## Execution
```
xmake run

Anirudh Verma
ME-A1 20300009

Enter the number of which you want to print table:- 34 *  1 = 34
34 *  2 = 68
34 *  3 = 102
34 *  4 = 136
34 *  5 = 170
34 *  6 = 204
34 *  7 = 238
34 *  8 = 272
34 *  9 = 306
34 * 10 = 340

```

### Known Bugs and/or Errors:

No known bugs till now.  
Can't print multiplication table for real numbers and also not for very huge numbers.

### Lessons Learned:

1. What are loops?
2. What is `for` loop? Syntas of it.
3. Uses of for loop.
