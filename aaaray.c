#include<stdio.h>
int main()
{
    int i,rem;
    for(i=2;i<549;i++)
    {
        rem=549%i;
        if(rem==0)
            printf("The number is non prime\n");
        else
            printf("The number is prime\n");
    }
    return 0;
}
