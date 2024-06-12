#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    if(x>y)
        goto S1;
    else
        goto S2;
    S1:printf("x is larger");
    goto S3;
    S2:printf("y is larger");
    S3:return 0;
}