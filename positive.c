#include<stdio.h>
int main(){
    int x;
    printf("Enter the no.: ");
    scanf("%d", &x);
    if(x>=0)
        printf("x is positive.");
    else
        printf("x is negative.");
    return 0;
}