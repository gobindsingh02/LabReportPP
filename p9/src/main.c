#include <stdio.h>
int main(void)
{   printf("ME-A1 20300025\n\n");
    int t;
    printf("Enter the number:- ");
    scanf("%d",&t);
    for (int i=1; i<=10; i++)
     {printf("%d * %2d = %d\n",t,i,i*t);}
    return 0;
}
