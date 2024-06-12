//call by value
#include<stdio.h>
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping value is a=%d and b=%d", x, y);
}
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping value is a=%d and b=%d", a, b);
    swap(a, b);
}