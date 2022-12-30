#include<stdio.h>
int main()
{
    int arr[3][3],c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Insert Your data in Matrix=");
            scanf("%d",&arr[i][j]);
            c++;
        }
    }
    int zero=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                zero++;
            }
        }
    }
    c=c/2;
    if(c<=zero)
    {
        printf("Matrix is Sparse");
    }
    else
    {
        printf("Matrix is Dense");
    }
return 0;
}