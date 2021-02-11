[Home of Lab Report](../lab.html)

# Program Ex 13: Find factorial of a number

## Discussion

The factorial function (symbol: `!`) says to multiply all whole numbers from our chosen number down to 1.  
**Examples:**
  
- 4! = 4 * 3 * 2 * 1 = 24
- 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
- 1! = 1

Also one thing to note that factorial of 0 (`0!`) is also **1**. And factorial is not defined for real numbers other than positive integers.

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

//Programmed by Anirudh Verma

#include <stdio.h>
int main(void)
{   printf("Anirudh Verma\nME-A1 2030009\n\n");
    long long int n;
    unsigned long long int fact=1; //Initialising variables for storing number and factorial
    printf("Enter a number to find it's factorial: ");
    scanf("%lld",&n);
    for(long long int i=2;i<=n;i++)
      { fact*=i; } //Calculating factorial by repetitive multiplication
    if (n>=0)
    printf("Factorial of the given number is %lld\n",fact); //Printing factorial
    else printf("Factorial of the given number doesn't exists\n"); //Statement for not able to calculate factorial
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release factorial
[100%]: build ok!

```

# input.dat

```

11

```

---


## Execution
```
xmake run

Anirudh Verma
ME-A1 2030009

Enter a number to find it's factorial: Factorial of the given number is 39916800

```

### Known Bugs and/or Errors:

Can't find factorial of large numbers and gives incorrect answer for it.

### Lessons Learned:

1. What is factorial?
2. For what values factorial is defined?
3. Learned to program a code for finding factorial of a number (if possible).
