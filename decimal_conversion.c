#include<stdio.h>
int main(){
    int x;
    printf("Enter any value of x: ");
    scanf("%d", &x);
    printf("x = %d", x);
    printf("\n x in hexadecimal = %x ", x);
    printf("\n x in octal = %o", x);
    printf("\n x in character = %c", x);
    return 0;
}