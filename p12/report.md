[Home of Lab Report](../lab.html)

# Program Ex 12: Create and display the contents of the structure book

## Discussion

In previous exercise we have discussed about structures. So, now we are going to implement it in this exercise, in a big to  practice again as it is popularly said that 
`Practice makes a man perfect`.

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
{
struct book
{ char name[70];
  float price;
  char author[60];
  char subject[60]; };

struct book b1={"pradeep physics",270.5,"pradeep","physics"};
struct book b2={"ansi c language",230.0,"balagurusuamy","Computer Science"};
struct book b3={"dairy of a wimpy kid",501.9,"jeff kinney","story book"};

printf("Name: %s\nPrice: %.2f\nAuthor: %s\nSubject: %s\n\n",b1.name,b1.price,b1.author,b1.subject);
printf("Name: %s\nPrice: %.2f\nAuthor: %s\nSubject: %s\n\n",b2.name,b2.price,b2.author,b2.subject);
printf("Name: %s\nPrice: %.2f\nAuthor: %s\nSubject: %s\n\n",b3.name,b3.price,b3.author,b3.subject);
return 0;
}
```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release structure
[100%]: build ok!

```

## Execution
```
xmake run

Name: pradeep physics
Price: 270.5
Author: pradeep
Subject: physics

Name: ansi c language
Price: 230.00
Author: balagurusuamy
Subject: Computer Science

Name: dairy of a wimpy kid
Price: 501.9
Author: jeff kinney
Subject: story book


```

### Known Bugs and Limitaions:

No known bugs, till now.
Data for structure `book` cannot be entered by a user as it is pre-defined.

### Lessons Learned:

1. What is structure?
2. Use of structure in daily life.
3. How to assign values to members of a structure?
