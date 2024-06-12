#include<stdio.h>
int main(){
    int x, r=0, n, a;
    printf("Enter the no: ");
    scanf("%d", &n);
    x=n;
    while(x>0){
        a=x%10;
        x=x/10;
        r=r*10+a;
    }
    printf("Reverse of %d is %d", n, r);
}