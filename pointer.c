#include<stdio.h>
int main(){
    int x, y, *p;
    printf("Store address of x \n");
    p=&x;
    printf("Enter any value of x and y: ");
    scanf("%d %d", &x, &y);
    printf("Value of x is %d \nValue of *p is %d \nValue of p is %d \n", x, *p, p);
    x++;
    printf("Value of x is %d \nValue of *p is %d \nValue of p is %d \n", x, *p, p);
    p=&y;
    printf("Value of y is %d \nValue of *p is %d \nValue of p is %d \n", y, *p, p);
    y++;
    printf("Value of y is %d \nValue of *p is %d \nValue of p is %d \n", y, *p, p);

}