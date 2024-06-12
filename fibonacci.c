#include<stdio.h>
int main(){
    int n, x=0, y=1, z;
    printf("Enter the no.: ");
    scanf("%d", &n);
    printf("Fibonacci series is: \n");
    printf("%d\t%d", x, y);
    for(int i=2; i<n; i++){
        z=x+y;
        x=y;
        y=z;
        printf("\t%d", z);
    }
}