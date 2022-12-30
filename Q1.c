#include<stdio.h>
int summatrix();
const m=3;
const n=3;
int main()
{
    int arr[m][3],arr1[m][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\n Enter element in 1st Array=");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\n Enter element in 2nd Array=");
            scanf("%d",&arr1[i][j]);
        }
    }
    summatrix(arr,arr1);
    mulmatrix(arr,arr1);

}
int summatrix(int num[m][n],int num1[m][n])
{
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",num[i][j]+num1[i][j]);
        }
        printf("\n");
    }
}
