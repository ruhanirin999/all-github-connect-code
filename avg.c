#include<stdio.h>
int main(){
	int a,b,c,avg,sum;
	printf("Enter the value:\n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("Average is: %d\n",sum/3);
	printf("sum is: %d",sum);
	if(a>b&&a>c)
	printf("\n A is maximum");
	else if(b>a&&b>c)
	printf("\n B is maximum");
	else
	printf("\n C is maximum");
	if(a<b&&a<c)
	printf("\n A is minimum");
	else if(b<a&&b<c)
	printf("\n B is minimum");
	else
	printf("\n C is minimum");
	
	return 0;
	
}