#include<stdio.h>
int main(){
    int r, c, i, j, temp;
    printf("Enter the no. of rows: ");
    scanf("%d", &r);
    printf("Enter the no. of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements for: ");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("original Matrix is: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose Matrix is: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i<j){
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}