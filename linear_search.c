#include<stdio.h>
int main(){
    int a[100], n, k, flag=0, pos=0;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key to find: ");
    scanf("%d", &k);
    for(int i = 0; i<n; i++){
        pos+=1;
        if(a[i]==k){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Key found at %d position", pos);
    else
        printf("Key not found");
}