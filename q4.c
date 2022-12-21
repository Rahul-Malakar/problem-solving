#include <stdio.h>
#include <stdlib.h>

int minm(int n, int m) { return n < m ? n : m; }

int main()
{
    int X, Y; 
    printf("Enter the dimensions of the matrix: ");
    scanf("%d", &X);
    Y = X;

    int **mat, **costMat, *path, temp, midPoint;
    mat = (int **)malloc(sizeof(int) * X);
    costMat = (int **)malloc(sizeof(int) * X);
    path = (int *)malloc(sizeof(int) * X);
    midPoint = (X % 2 == 0) ? (X / 2) - 1 : X / 2;

    printf("\nMax Element value can be 999999\n");
    printf("Enter the elements (%d x %d matrix): ", X, Y);
    for (int i = 0; i < X; i++)
    {
        mat[i] = (int *)malloc(sizeof(int) * Y);
        costMat[i] = (int *)malloc(sizeof(int) * Y);
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int j = Y - 1; j >= 0; j--)
    {
        for (int i = X - 1; i >= 0; i--)
        {
            if (j == Y - 1)
            {
                if (i == midPoint)
                {
                    costMat[i][j] = mat[i][j];
                }
                else
                {
                    costMat[i][j] = 1000000; 
                }
            }
            else
            {
                temp = costMat[i][j + 1];
                if (i - 1 >= 0)
                {
                    temp = minm(temp, costMat[i - 1][j + 1]);
                }
                if (i + 1 < X)
                {
                    temp = minm(temp, costMat[i + 1][j + 1]);
                }
                costMat[i][j] = temp + mat[i][j];
            }
        }
    }
    printf("\n\n");
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    int index = midPoint;
    int pathIndex = 0;
    path[pathIndex++] = mat[index][0];
    for (int j = 0; j < Y - 1; j++)
    {
        temp = costMat[index][j + 1];
        if (index - 1 >= 0)
        {
            temp = minm(temp, costMat[index - 1][j + 1]);
        }
        if (index + 1 < X)
        {
            temp = minm(temp, costMat[index + 1][j + 1]);
        }
        if (temp == costMat[index][j + 1])
        {
            printf("Go Right\n");
        }
        else if (index - 1 >= 0 && temp == costMat[index - 1][j + 1])
        {
            index--;
            printf("Go Diagonally Up Right\n");
        }
        else if (index + 1 < X && temp == costMat[index + 1][j + 1])
        {
            index++;
            printf("Go Diagonally Down Right\n");
        }
        path[pathIndex++] = mat[index][j + 1];
    }
    printf("\n");
    for (int i = 0; i < X; i++)
    {
        printf("%d", path[i]);
        if (i != X - 1)
        {
            printf("->");
        }
    }
    printf("\nTotal cost: %d", costMat[midPoint][0]);
}