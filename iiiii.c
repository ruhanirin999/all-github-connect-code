#include<stdio.h>
int main()
{
    int sum=0,c=0,num,a,rem;
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        c=c++;
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("%d",c);

    int arm=a;

    while(num!=0)
    {
        rem=num%10;
        sum=sum+pow(rem,c);
        num=num/10;
    }
    if(sum=arm)
        printf("armstrong");
        else
        printf("not armstrong");
    return 0;
}
