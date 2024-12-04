#include<stdio.h>
int main()
{
    int i;
    //int a[5]={1,2,3,4,5};/
    int a[5];
    int sum=0;
    int evenSum=0,oddSum=0;
    int rem;
    int even=0,odd=0;
    for(i=0;i<=4;i++)
        printf("enter value for index %d: ",i);
        scanf("%d",&a[i]);
        //calculates the sum
        sum = sum + a[i];
        printf("value of sum is: %d\n",sum);

        //check for even odd
        rem = a[i]%2;
        if(rem == 0)
        {
            evenSum = evenSum + a[i];
            even++;
        }
        if(rem ==1)
        {
            oddSum = oddSum + a[i];
            odd++;
        }

    }

    printf("the values are:\n");
    for (i=0;i<=4;i++)
    {
        printf("value in index %d: ",i);
        printf("%d\n",a[i]);
    }
    printf("Sum of the values: %d \n",sum);
    printf("Number of even: %d \n",even);
    printf("Number of odd: %d \n",odd);
    printf("Sum of the even values: %d \n",evenSum);
    printf("Sum of the odd values: %d \n",oddSum);
    return 0;
}

}
