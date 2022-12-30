#include<stdio.h>
int sumdig();
int main()
{
    int row=4;
    int mat[row][4];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("\nEnter Element In Array=");
            scanf("%d",&mat[i][j]);
        }
    }
    sumdig(mat,row);
    return 0;
}
int sumdig(int mat[][4],int row)
{
    int sum=0,sum1=0;
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i+j==row-1)
            {
                sum=sum+mat[i][j];
            }
            else if(i==j)
            {
                sum1=sum1+mat[i][j];
            }
        }
    }
    printf("\n Matrix.........Output....\n ");
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
printf("\n Sum of Right Digonals of Matrix=%d ",sum);
printf("\n Sum of Left Digonals of Matrix=%d ",sum1);
}