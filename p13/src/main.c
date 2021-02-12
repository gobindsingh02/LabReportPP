
#include <stdio.h>
int main(void)
{   printf("ME-A1 2030025\n\n");
    int n;
    int fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
      { fact*=i; }
    if (n>=0)
    printf("Factorial of the given number is %d\n",fact);
    else printf("Factorial of the given number doesn't exists\n");
    return 0;
}
