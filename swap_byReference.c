//call by reference
#include<stdio.h>
void swap(int *p1, int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping value is a=%d and b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping value is a=%d and b=%d", a, b);
}