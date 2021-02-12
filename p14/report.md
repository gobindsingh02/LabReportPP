[Home of Lab Report](../lab.html)

# Program Ex 14: Print Fibinacci series upto n terms

## Discussion

Fibinacci series is a series such that each number is the sum of the two preceding ones, starting from 0 and 1. That is, n₁=0, n₂=1 and nth term is equal to sum of (n-1)th term and (n-2)th term. Thus the sequence goes on like this,  
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ....

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
int main() {
    printf("ME-A1 2030025\n\n");
    int n,sum=0,x=1;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
      { printf("%d\n",sum);
        sum+=x;
        x=sum-x;
      }
    return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release fibonacci
[100%]: build ok!

```

# input.dat

```

13

```

---


## Execution
```
xmake run

ME-A1 2030025

Enter the no. of terms: 0
1
1
2
3
5
8
13
21
34
55
89
144

```

### Limitations:

Doesn't print the terms correctly if the actual value of the nth term exceeds the range of the datatype used.

### Lessons Learned:

1. What is fibonacci series?
2. How to print fibonacci series upto n terms in C program?
