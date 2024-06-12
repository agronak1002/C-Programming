#include<stdio.h>
int main(){
    for(int i = 65; i<=69; i++){
        for(int j = i; j<=i+4; j++){
            printf("%c\t", j);
        }
        printf("\n");
    }
    return 0;
}