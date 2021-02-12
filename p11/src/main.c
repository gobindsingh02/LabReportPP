#include <stdio.h>
int main(void)
{
printf("ME-A1 2030025\n\n");
struct stud
{ char name[50];
int rollno;
};
struct student s1={"Ram Kumar",123456};
printf("Name: %s\nRoll No.: %d\n",s1.name,s1.rollno);
return 0;
}
