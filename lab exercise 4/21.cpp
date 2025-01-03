//21.Write a program that asks order of two matrices and read these matrices.
//Find multiplication matrix if order of matrices is suitable for multiplication.
#include<stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], matmult[10][10];
    int row1, col1, row2, col2, i, j, k, sum;
    printf("Enter size of first matrix:\n");
    printf("Enter row size: ");
    scanf("%d", &row1);
    printf("Enter column size: ");
    scanf("%d", &col1);
    printf("\nEnter the element of first matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("\nEnter size of second matrix:\n");
    printf("Enter row size: ");
    scanf("%d", &row2);
    printf("Enter column size: ");
    scanf("%d", &col2);
    printf("\nEnter the element of second matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
            scanf("%d", &mat2[i][j]);
    }
    if(col1!=row2)
    {
        printf("\nMultiplication not possible!");
        printf("\nExiting...\n");
        printf("Press any key...");
        return 0;
    }
    printf("\nMultiplying the two matrix...\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            sum = 0;
            for(k=0; k<col1; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            matmult[i][j] = sum;
        }
    }
    printf("The multiplication result (resultant matrix) is:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
            printf("%d ", matmult[i][j]);
        printf("\n");
    }
    return 0;
}