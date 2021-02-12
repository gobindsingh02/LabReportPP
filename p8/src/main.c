#include <stdio.h>
int main(void)
{   printf("ME-A1 2030025\n\n");
printf("Enter the budget: ");
int x;
scanf("%d",&x);
if (x<100) printf("you can't buy watch\n");
else if (x>=100 && x<500) printf("buy sonata or timex\n");
else if (x>=50 && x<200) printf("buy casio g-shock or fitness band\n")
else printf("Buy rolex");
    return 0;
}
