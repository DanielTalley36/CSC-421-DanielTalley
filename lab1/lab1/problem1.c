// This program input 25 and outpus the some of +5 to said input

#include <stdio.h>
#include <stdlib.h>

int main ()  {
    int UsrNm;
    printf("Enter an integer: \n");

    scanf("%d", &UsrNm);
    int b = 5;
    int sum;

    sum = UsrNm + b;

    printf ("The sum of %d and 5 is %d", UsrNm, sum);
    return 0;

}
