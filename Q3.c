#include<stdio.h>
int trans();
int main()
{
    int row;
    printf("\nEnter Size of Row=");
    scanf("%d",&row);
    int mat[row][4];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("\nEnter Element In Array=");
            scanf("%d",&mat[i][j]);
        }
    }
    trans(mat,row);
    return 0;
}
int trans(int mat[][4],int row)
{
    int mat1[row][4];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            mat1[j][i]=mat[i][j];
           
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    
}