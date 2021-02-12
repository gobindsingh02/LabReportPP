[Home of Lab Report](../lab.html)

# Program Ex 13: Find factorial of a number

## Discussion

The factorial function says to multiply all whole numbers from our chosen number down to 1.  
Examples:
  
- 3! = 3 * 2 * 1 = 6
- 4! = 4 * 3 * 2 * 1 = 24

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

#include <stdio.h>
int main(void)
{   printf("ME-A1 2030025\n\n");
    int n;
    int fact=1; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
      { fact*=i; } 
    if (n>=0)
    printf("Factorial of the given number is %d\n",fact); 
    else printf("Factorial of the given number doesn't exists\n"); 
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

7

```

---


## Execution
```
xmake run

ME-A1 2030025

Enter a number: Factorial of the given number is 5040

```

### Known Bugs and/or Errors:

Can't find factorial of large numbers and gives incorrect answer for it.

### Lessons Learned:

1. What is factorial?
2. For what values factorial is defined?
3. Learned to program a code for finding factorial of a number (if possible).
