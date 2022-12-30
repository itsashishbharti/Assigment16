#include<stdio.h>
int mulmatrix();
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
    mulmatrix(arr,arr1);

}
int mulmatrix(int num[m][n],int num1[m][n])
{
    int mul[m][n];
     for(int i=0;i< m;i++)
 {
  for(int j=0;j< n;j++)
  {
   int sum = 0;
   for(int k=0;k<m;k++)
   {
        sum=sum+ num[i][k]*num1[k][j];
   }
   mul[i][j]=sum;
  }
 }
  for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}