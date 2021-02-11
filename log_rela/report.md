[Home of Lab Report](../lab.html)

# Program Ex 06: Program to do Logical and Relational operations

## Discussion

Logical operators are those operators which when used, returns either 0 (False) or 1 (True) on operands which are also of boolean datatype. It is generally used in the condition in `if- else` conditional statements. Relational operators are those operators which also results in 0 or 1 by checking the relation between the operands which are not of boolean datatype. It is generally used in `for` and `while` loops and in `if-else` conditional satements too.
Following is the list of different logical and relational operators:

### Logical operators

| Operator Symbol | Meaning of operator |
| :-------------- | :------------------ |
| `&&` | Logical AND; result is TRUE only if both operands are TRUE |
| `||` | Logical OR; result is FALSE only if both operands are FALSE |
| `!` | Logical NOT; result is TRUE if operand is FALSE and vice-versa |

### Relational operators

| Operator Symbol | Meaning of operator |
| :-------------- | :------------------ |
| `==` | Equal to |
| `!=` | Not Equal to |
| `<` | Less than |
| `>` | Greater than |
| `<=` | Less than or equal to |
| `>=` | Greater than or equal to |

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

int main()
{   printf("Anirudh Verma\nME-A1 2030009\n\n");
    int a=10,b=10,c=20;
    printf ("a=%d, b=%d, c=%d\n\n",a,b,c);
    printf ("|| means OR\n&& means AND\n! means NOT\n");
    printf("Use of Logical & Relational Operators:-\n");
    printf("a==b || a<b is %d\n",a==b || a<b);
    printf("a==b && a<b is %d\n",a==b && a<b);
    printf("a==b || !(a<b) is %d\n",a==b || !(a<b));
    printf("a==b && !(a>c) is %d\n",a==b && !(a>c));
    printf("a==b || !(a>c) is %d\n",a==b || !(a>c));
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release log_rela
[100%]: build ok!

```

## Execution
```
xmake run

Anirudh Verma
ME-A1 2030009

a=10, b=10, c=20

|| means OR
&& means AND
! means NOT
Use of Logical & Relational Operators:-
a==b || a<b is 1
a==b && a<b is 0
a==b || !(a<b) is 1
a==b && !(a>c) is 1
a==b || !(a>c) is 1

```

### Known Bugs and/or Errors:

Currently, no known bugs.

### Lessons Learned:

1. What are logical are relational operators?
2. Applications of logical and relational operators.
2. Symbols of all logical and relational operators and uderstanding their operations. 
3. How to combinely use logical and relational operators?
