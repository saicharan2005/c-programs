#include<stdio.h>

   void matrixInput(int *mat[10])
   {
    int row, col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d", mat[row] + col);
        }
    }
    return 0;
}
void matrixoutput(int *mat[10])
{
    int row, col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d ", *(mat[row] + col));
        }
        printf("\n");

    }
    return 0;
}


void matrixsum(int *mat1[10], int *mat2[10], int *res[10])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            *(res[i]+ j) = *(mat1[i]+ j) + *(mat2[i]+ j);
        }
    }
}

int main()
{
    int a[10][30],b[10][30],c[10][30];
    int *p[10],*q[10],*r[10];
    int i;
         for(i=0;i<3;i++)
        {
            p[i]=&a[i][0];
             q[i]=&b[i][0];
              r[i]=&c[i][0];
        }  
        printf("\nEnter First matrix for 3X3 matrix");
        matrixInput(p);
       
        printf("\nEnter Second matrix for 3X3 matrix");
        matrixInput(q);

        matrixsum(p,q,r);
        matrixoutput(r);
    return 0;
}