#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    a=0;
    b=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\n%d\t%d\t",a,b);

    for(i=1;i<=n-2;i++)
    {
      c=a+b;
      printf("%d\t",c);
      a=b;
      b=c;
    }
    printf("\n");
    return 0;
}
