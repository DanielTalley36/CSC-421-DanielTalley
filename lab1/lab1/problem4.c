//

#include <stdio.h>
#include <stdlib.h>

int main() {
double array0[3];
printf ("Enter a number for the first array: \n");
scanf("%lf", &array0[0]);
printf ("Enter a number for the first array: \n");
scanf("%lf", &array0[1]);
printf ("Enter a number for the first array: \n");
scanf("%lf", &array0[2]);

double array1[3];
printf ("Enter a number for the second array: \n");
scanf("%lf", &array1[0]);
printf ("Enter a number for the second array: \n");
scanf("%lf", &array1[1]);
printf ("Enter a number for the second array: \n");
scanf("%lf", &array1[2]);

double array2[6];
array2 = array0 + array1;

printf ("The merged array is %lf", array2);

    return 0;
}
