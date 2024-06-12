#include<stdio.h>
int main(){
    int x, y, z, l;
    printf("Enter the value of first no.: ");
    scanf("%d", &x);
    printf("Enter the value of second no.: ");
    scanf("%d", &y);
    printf("Enter the value of third no.: ");
    scanf("%d", &z);
    if(x>y && x>z)
        printf("x is largest");
    else if(y>x && y>z)
        printf("y is largest");
    else if(x==y && y==z)
        printf("all are equal");
    else
        printf("z is largest");
    return 0;
}