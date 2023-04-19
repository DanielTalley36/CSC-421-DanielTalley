#include <stdio.h>

int main () {
    int a = 125, b = 12345; 
    long ax = 1234567890; 
    short s = 4043; 
    float x = 2.13459; 
    double dx = 1.1415927; 
    char c = 'W'; 
    unsigned long ux = 2541567890;

    int sum1 = a + c, sum2 = x + c, sum3 = dx + x, sum4 = ((int) dx) +ax, sum5 = a + x, sum6 = s + b, sum7= ax + b, 
    sum8 = s + c, sum9 = ax + c, sum10 =  ax + ux;

    printf ("a + c = %d\nx + c = %d\ndx + x = %d\n((int) dx) + ax = %d\na + x = %d\n\
s + b = %d\nax + b = %d\ns + c = %d\n\
ax + c = %d\nax + ux = %d", sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9, sum10);

// Not sure why sum10 is producing a negative number, something to do with unsigned long, hitting maximum, and/or setting the sign bit?
    return 0;


}