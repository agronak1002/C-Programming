#include<stdio.h>
int main(){
    float r, aoc, coc,  pi = 3.14;
    printf("Enter the value of radius: ");
    scanf("%f", &r);
    aoc = pi * r * r;
    coc = 2 * pi * r;
    printf(" Area = %.2f ", aoc);
    printf("Circumference = %.2f", coc);
    return 0;
}