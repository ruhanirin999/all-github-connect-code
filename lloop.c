#include<stdio.h>
int main()
{
    int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum=0 ;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);

    }
    return 0;
}
