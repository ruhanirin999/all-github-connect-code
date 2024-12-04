#include<stdio.h>
int main(){
	int i,r;
	for(i=2;i<=540;i++)
	{
		r=541%i;
		if(r==0)
		printf("The number is non prime \n");
		
	}
	return 0;
}