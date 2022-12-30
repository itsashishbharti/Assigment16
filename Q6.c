#include<stdio.h>
int sumrc();
int main()
{
    int row,col=3;
    printf("\n Enter Your Size Of Row=");
    scanf("%d",&row);

    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\nEnter Element In Array=");
            scanf("%d",&mat[i][j]);
        }
    }
    sumrc(mat,row,col);
}
int sumrc(int mat[][3],int row,int col)
{
    int sum[row],sum1[col];
    for(int i=0;i<row;i++)
    {
        sum[i]=0;
        sum1[i]=0;
        for(int j=0;j<col;j++)
        {
            sum[i]=sum[i]+mat[i][j];
            sum1[i]=sum1[i]+mat[j][i];
        }
    }
    printf("\n Matrix...........\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("%d \n",sum[i]);
    }
    printf("\n");
    for(int i=0;i<col;i++)
    {
        printf("%d\t",sum1[i]);
    }
}