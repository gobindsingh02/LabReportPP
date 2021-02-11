#include <stdio.h>
int main(void)
{
printf("Anirudh Verma\nME-A1 2030009\n\n");
struct student
{ char name[50];
  int rollno;
  float avg_marks;
  char email_id[100];
  char address[120];
};
struct student s1={"Anirudh Verma",2030009,94.8,"anirudh2030009@gndec.ac.in","Yamunanagar, Haryana"};
struct student s2={"Shreyansh Mittal",1046622,97.2,"shreyansh@gmail.com","Chennai, Tamilnadu"};
struct student s3={"Jithya Das",4985693,91.6,"jithya.s@gmail.com","Kottayam, Kerala"};
printf("Name: %s\nRoll No.: %d\nAverage Marks: %.2f\nEmail Id: %s\nAddress: %s\n\n",s1.name,s1.rollno,s1.avg_marks,s1.email_id,s1.address);
printf("Name: %s\nRoll No.: %d\nAverage Marks: %.2f\nEmail Id: %s\nAddress: %s\n\n",s2.name,s2.rollno,s2.avg_marks,s2.email_id,s2.address);
printf("Name: %s\nRoll No.: %d\nAverage Marks: %.2f\nEmail Id: %s\nAddress: %s\n\n",s3.name,s3.rollno,s3.avg_marks,s3.email_id,s3.address);
return 0;
}
