#include <stdio.h>

int main()  {
    int height = 5;
    int width = 3;

    int perimeter = height*2 + width*2;
    int area = height*width;

    printf("Perimeter of the rectangle = %d inches\nArea of the rectangle = %d inches", perimeter, area);

    return 0;
}