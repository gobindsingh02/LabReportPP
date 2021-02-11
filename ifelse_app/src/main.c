#include <stdio.h>
int main(void)
{   printf("\nAnirudh Verma\nME-A1 2030009\n\n");
    float  height,weight;
    printf("Enter your Weight in Kgs :- ");
    scanf("%f",&weight);
    printf("Enter your Height in meters :- ");
    scanf("%f",&height);
    float  BMI=weight/(height*height);
    printf("Your BMI is %f.\n",BMI);
    if (BMI>30)
    {printf("You are obese!\n\n");}
    else if(BMI>=25)
    {printf("You are overweight!\n\n");}
    else if(BMI>=18.5)
    {printf("You are normal.\n\n");}
    else
    {printf("You are underweight!\n\n");}
    return 0;
}
