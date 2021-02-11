[Home of Lab Report](../lab.html)

# Program Ex 09: Print multiplication table using for loop

## Discussion

A loop is used to repeat a set of statement(s) until the condition becomes false or till the condition is true. One of the loop that C language provides is `for` loop. Its syntax is as follows:  

```
for (intialization; condition; updatation) {
  block of statements;
}
```
Initialisation means we have to initialze 

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

List all the known limitations / bugs and / or errors of your program.

After extensively testing your program, you should be aware of (nearly) every issue it has. How does your program handle bad input? How does your program handle edge cases? This section is a space for full-disclosure; what's wrong with your program?

### Lessons Learned:

1. What went well
1. What you would do differently next time
1. How the exercise might be revised to make it clearer/more satisfying
1. What the faculty members might have done differently to promote learning
