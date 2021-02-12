#include <stdio.h>
int main() {
    printf("ME-A1 2030025\n\n");
    int n,sum=0,x=1;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
      { printf("%d\n",sum);
        sum+=x;
        x=sum-x;
      }
    return 0;
}
