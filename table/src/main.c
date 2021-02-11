#include <stdio.h>
int main(void)
{   printf("Anirudh Verma\nME-A1 20300009\n\n");
    int t;
    printf("Enter the number of which you want to print table:- ");
    scanf("%d",&t);
    for (int i=1; i<=10; i++)
     {printf("%d * %2d = %d\n",t,i,i*t);}
    return 0;
}
