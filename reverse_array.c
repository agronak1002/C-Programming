#include<stdio.h>
int main(){
    int n, temp, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Old Array = ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    for(i=0, j=n-1; i<j; i++, j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nNew Array = ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}