#include<stdio.h>
int main()
{
	int i;
	printf("\n Even numbers are:\n");
	for(i=2;i<=10;i=i+2)
	printf("%d ,\t",i);
	printf("\n Odd numbers are:\n");
	for(i=1;i<=10;i=i+2)
	printf("%d ,\t",i);
	return 0;
}