[Home of Lab Report](../lab.html)

# Program Ex 03: Program to print my favourite poem.

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
{printf("\nAnirudh Verma\nME-A1 2030009\n\nMy Favourite Poem:-\n^^^^^^^^^^^^^^^^^\n");
printf("Jonny Jonny,\nYes Papa,\nEating Sugar?\nNo papa!\nTelling lie?\nNo Papa!\nOpen your mouth!\nHaahah Haah.\n\n");
return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release poem
[100%]: build ok!

```

## Execution
```
xmake run


Anirudh Verma
ME-A1 2030009

My Favourite Poem:-
^^^^^^^^^^^^^^^^^
Jonny Jonny,
Yes Papa,
Eating Sugar?
No papa!
Telling lie?
No Papa!
Open your mouth!
Haahah Haah.


```

### Known Bugs and/or Errors:

No known bugs, till now.

### Lessons Learned:

1. Including standard input output header files for use of `printf` function.
2. How to define `main` function which is mandatory for a C program?
3. `printf();` function syntax.
3. Use of new line character (`\n`) within strings.
