//This program initializes a 3 array and ask for the users input to fill it. It then outputs the array with the average of said array
#include <stdio.h>
#include <stdlib.h>

int main() {
double array[3];
printf ("Enter a number: \n");
scanf("%lf", &array[0]);
printf ("Enter a number: \n");
scanf("%lf", &array[1]);
printf ("Enter a number: \n");
scanf("%lf", &array[2]);
double average;
average = (array[0] +array[1] +array[2]) / 3;

printf ("The array is [%lf,%lf,%lf].", array[0], array[1], array[2]);
printf ("The average of the array is %lf.", average);
    return 0;
}