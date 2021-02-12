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
