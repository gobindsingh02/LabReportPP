#include <stdio.h>
int sumn(n)
{int sum=0;
for (int x=1;x<=n;x++)
{sum+=x;}
return sum;
}
int main(void)
{int n;
printf("Enter the number till you want yo sum:- ");
scanf("%d",&n);
printf("Sum of first %d natural numbers is %d\n",n,sumn(n));
return 0;
}
