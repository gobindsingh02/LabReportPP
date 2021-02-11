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
{ char name[60];
  float price;
  char author[60];
  char subject[60]; };

struct book b1={"Harry Potter",474.95,"J.K. Rowling","Fantasy Literature"};
struct book b2={"Sumita Arora Python Class XII",279.0,"Sumita Arora","Computer Science"};
struct book b3={"Gulliver's Travel",149.9,"Jonathan Swift","Fantasy Fiction"};

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

Name: Harry Potter
Price: 474.95
Author: J.K. Rowling
Subject: Fantasy Literature

Name: Sumita Arora Python Class XII
Price: 279.00
Author: Sumita Arora
Subject: Computer Science

Name: Gulliver's Travel
Price: 149.90
Author: Jonathan Swift
Subject: Fantasy Fiction


```

### Known Bugs and Limitaions:

No known bugs, till now.
Data for structure `book` cannot be entered by a user as it is pre-defined.

### Lessons Learned:

1. What is structure?
2. Use of structure in daily life.
3. How to assign values to members of a structure?
