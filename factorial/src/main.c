//Programmed by Anirudh Verma

#include <stdio.h>
int main(void)
{   printf("Anirudh Verma\nME-A1 2030009\n\n");
    long long int n;
    unsigned long long int fact=1; //Initialising variables for storing number and factorial
    printf("Enter a number to find it's factorial: ");
    scanf("%lld",&n);
    for(long long int i=2;i<=n;i++)
      { fact*=i; } //Calculating factorial by repetitive multiplication
    if (n>=0)
    printf("Factorial of the given number is %lld\n",fact); //Printing factorial
    else printf("Factorial of the given number doesn't exists\n"); //Statement for not able to calculate factorial
    return 0;
}
