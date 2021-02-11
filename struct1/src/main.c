#include <stdio.h>
int main(void)
{
printf("Anirudh Verma\nME-A1 2030009\n\n");
struct student
{ char name[50];
int rollno;
};
struct student s1={"Anirudh Verma",2030009};
printf("Name: %s\nRoll No.: %d\n",s1.name,s1.rollno);
return 0;
}
