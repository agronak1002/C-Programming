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
    for(i=1; i<n; i++){
        for(j=i; j>0; j--){
            if(a[j-1]>a[j]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("\nSorted array = ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}