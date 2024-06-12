#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int x, y, f;
    printf("Enter the first no.: ");
    scanf("%d", &x);
    printf("Enter the second no.: ");
    scanf("%d", &y);
    f=(fact(x)+fact(y))/(fact(x-y));
    printf("Answer is %d", f);
}