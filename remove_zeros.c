#include<stdio.h>
int main(){
    int n, x=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int b[n], a[n];
    printf("Enter the elements for the array: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            b[x]=a[i];
            x+=1;
        }
    }
    printf("Original array: ");
    for(int i = 0; i<n; i++){
        printf(" %d\t", a[i]);
    }
    printf("\nNew array: ");
    for(int i = 0; i<x; i++){
        printf(" %d\t", b[i]);
    }
}