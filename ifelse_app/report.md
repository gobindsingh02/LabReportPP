[Home of Lab Report](../lab.html)

# Program Ex 08: Application of if-else conditional statements

## Discussion

If-Else statements can be used to solve many daily life problems. One among the many problems is Body Mass Index (BMI). The BMI is defined as the body mass divided by the square of the body height, and is expressed in units of kg/m2, resulting from mass in kilograms and height in metres. Everyone in this world wants to be fit. So, one needs to keep checking his/her BMI to be ensure that he/she is fit. So, for that purpose we need to make BMI calculator which asks user for his weight (in kgs) and height (in meters). For that we need to use `scanf()` function to ask user for the input. Syntax of `scanf()` function is as follows:  
`scanf("%d",&variable);`  
In this you can see, we need to specify format specifier within double quotes (""), for the datatype of the variable in which we store the value that user enters and apmersand symbol (`&`) is used before the variable name to specify its address, that is `&` combined with variable name represents address of that variable.  
Following is the BMI Table:
  
| BMI Value | Category |
| :-------: | :------: |
| <18.5 | Underweight |
| 18.5-25 | Normal |
| 25-30 | Overweight |
| >30 | Obese |

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

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

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release ifelse_app
[100%]: build ok!

```

# input.dat

```

80
1.80

```

---


## Execution
```
xmake run


Anirudh Verma
ME-A1 2030009

Enter your Weight in Kgs :- Enter your Height in meters :- Your BMI is 24.691360.
You are normal.


```

### Known Bugs and Limitations:

No known bugs.  
Can't find BMI for very high and precise values of height and weight.

### Lessons Learned:

1. What is BMI? and categories under it.
2. Syntax of `scanf()` function and its use.
3. How to denote address of variables?
