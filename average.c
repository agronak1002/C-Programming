#include<stdio.h>
float get_avg(int arr[], int n){
    float avg, sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    avg=sum/n;
    return avg;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the array:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    float average = get_avg(a, size);
    printf("Average of array is %.2f", average);
}