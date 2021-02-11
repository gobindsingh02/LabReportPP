#include <stdio.h>

int main()
{   printf("Anirudh Verma\nME-A1 2030009\n\n");
    int a=10,b=10,c=20;
    printf ("a=%d, b=%d, c=%d\n\n",a,b,c);
    printf ("|| means OR\n&& means AND\n! means NOT\n");
    printf("Use of Logical & Relational Operators:-\n");
    printf("a==b || a<b is %d\n",a==b || a<b);
    printf("a==b && a<b is %d\n",a==b && a<b);
    printf("a==b || !(a<b) is %d\n",a==b || !(a<b));
    printf("a==b && !(a>c) is %d\n",a==b && !(a>c));
    printf("a==b || !(a>c) is %d\n",a==b || !(a>c));
    return 0;
}
