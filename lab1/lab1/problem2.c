
// This program initializes a double array of 5 and outputs it and sums it

#include <stdio.h>
#include <stdlib.h>
int main() {

double sum;

double array[5];
array[0] = 5.00;
array[1] = 8.00;
array[2] = 10.00;
array[3] = 13.00;
array[4] = 19.00;

sum = array[0] +array[1] +array[2] + array[3] + array[4];
//int loop;
//for(loop = 0; loop < 10; loop++)
printf("The array is [%f,%f,%f,%f,%f].", array[0], array[1], array[2], array[3], array[4]);
printf("The sum of the array is %f", sum);

return 0;
}