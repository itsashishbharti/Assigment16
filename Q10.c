#include<stdio.h>
int main()
{
    int mat[3][3],row[3],count;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter Your element [%d %d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    } 
     for(int i=0;i<3;i++)
    {
        count=0;
        for(int j=0;j<3;j++)
        {
            if(mat[i][j]==1)
            {
                count++;
            }
        }
        row[i]=count;
    }
    int big=0;
for(int i=0;i<3;i++)
{
    if(big<row[i])
    {
        big=row[i];
    }

}
    printf("\nMaximum Row of 1s is %d",big);
    return 0;

}