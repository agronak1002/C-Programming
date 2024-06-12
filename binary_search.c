#include<stdio.h>
int main(){
    int a[100], n, k, mid, low=0, high, flag=0;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key to find: ");
    scanf("%d", &k);
    high=n-1;
    while(high>low){
        mid=(low+high)/2;
        if(a[mid]==k){
            printf("Key found at %d position", mid+1);
            flag=1;
            break;
        }
        else if(a[mid]<k)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==0){
        printf("Key not found");
    }
}