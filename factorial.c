#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int x, f;
    printf("Enter the no.: ");
    scanf("%d", &x);
    f=fact(x);
    printf("Factorial of %d is %d", x, f);
}