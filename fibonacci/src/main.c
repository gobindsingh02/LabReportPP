#include <stdio.h>
int main() {
    printf("Anirudh Verma\nME-A1 2030009\n\n");
    long long int n,sum=0,x=1;
    printf("Enter the no. of terms you want to get print: ");
    scanf("%lld",&n);
    for (int i=1; i<=n; i++)
      { printf("%lld\n",sum);
        sum+=x;
        x=sum-x;
      }
    return 0;
}
