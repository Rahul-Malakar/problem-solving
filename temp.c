#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,ct=0,k=0,*b[3];
    printf("Enter the number of row and column\n");
    int r,c;
    scanf("%d %d",&r,&c);
    a=(int *)malloc(r*sizeof(int));
    printf("Enter the matrix\n");
    for (int i = 0; i < r; i++)
    {
        a[i]=(int *)malloc(c*sizeof(int));
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]!=0)
            {
                ct++;
            }
        }
    }
    printf("Your sparce matrix is\n");
    b[0]=(int *)malloc(ct*sizeof(int));
    b[1]=(int *)malloc(ct*sizeof(int));
    b[2]=(int *)malloc(ct*sizeof(int));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < ct; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    free(a);free(b[0]);free(b[1]);free(b[2]);
}