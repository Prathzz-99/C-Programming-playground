#include <stdio.h>
#define PI 3.14
int main(){
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is %f\n", r, PI*r*r);
    printf("The volume of cylinder with radius %d and height %d is %f", r, height,  PI*r*r*height);
    return 0;
}