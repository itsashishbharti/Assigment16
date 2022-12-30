#include<stdio.h>
int main()
{
     int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Insert Your data in Matrix=");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n\nUpper Triangular Matrix\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>0 & j<i)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n\nLower Triangular Matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>=j)
            {
                  printf("%d ",arr[i][j]);
            }
            else
            {
                printf("0 ");
              
            }
        }
        printf("\n");
    }
    return 0;
}