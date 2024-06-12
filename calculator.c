#include<stdio.h>
int main(){
    int x, y, ch;
    printf("Enter the value of first no.: ");
    scanf("%d", &x);
    printf("Enter the value of second no.: ");
    scanf("%d", &y);
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5.  Modulus \nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nAddition = %d", x+y);
        break;
    case 2:
        printf("\nSubtraction = %d", x-y);
        break;
    case 3:
        printf("\nMultiplication = %d", x*y);
        break;
    case 4:
        printf("\nDivision = %d ", x/y);
        break;
    case 5:
        printf("\nModulus = %d ", x%y);
        break;
    default:
        printf("Please enter right choice");
        break;
    }
    return 0;

}