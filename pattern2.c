#include<stdio.h>
int main(){
    for(int r=1; r<=5; r++){
        for(int c=r; c<=5; c++){
            printf("*\t");
        }
        printf("\n");
    }
}