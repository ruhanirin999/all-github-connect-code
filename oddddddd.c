#include<stdio.h>
int main()
{
	int i;
	printf("Enter the value of i:\n");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("its an even number\n");
	}
	else{
		printf("its an odd number\n");
	}
	return 0;
}