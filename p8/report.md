[Home of Lab Report](../lab.html)

# Program Ex 08: Application of if-else conditional statements

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

include <stdio.h>
int main(void)
{   printf("ME-A1 2030025\n\n");
printf("Enter the budget: ");
int x;
scanf("%d",&x);
if (x<100) printf("you can't buy watch\n");
else if (x>=100 && x<500) printf("buy sonata or timex\n");
else if (x>=50 && x<200) printf("buy casio g-shock or fitness$
else printf("Buy rolex"); 
    return 0;
}
```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release ifelse_app
[100%]: build ok!

```

# input.dat

```

80

```

---


## Execution
```
xmake run


ME-A1 2030025

Enter your budget: you can't buy watch


```

### Known Bugs and Limitations:

No known bugs.  
Can't find BMI for very high and precise values of height and weight.

### Lessons Learned:

1. What is BMI? and categories under it.
2. Syntax of `scanf()` function and its use.
3. How to denote address of variables?
