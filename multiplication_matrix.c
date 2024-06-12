#include<stdio.h>
int main(){
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the no. of rows for matrix1: ");
    scanf("%d", &r1);
    printf("Enter the no. of columns for matrix1: ");
    scanf("%d", &c1);
    int a[r1][c1];
    printf("Enter the elements for matrix 1: ");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the no. of rows for matrix2: ");
    scanf("%d", &r2);
    printf("Enter the no. of columns for matrix2: ");
    scanf("%d", &c2);
    printf("Enter the elements for: ");
    int b[r2][c2];
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    if(c1==r2){
        printf("First matrix is: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix is: \n");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        int c[r1][c2];
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                c[i][j]=0;
                for(k=0; k<r2; k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Resultant matrix is: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication not possible");
}