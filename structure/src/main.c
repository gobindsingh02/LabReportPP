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
