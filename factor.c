#include<stdio.h>
int main(){
	int i,r;
	for(i=1;i<=12;i++)
	{
		r=12%i;
		if(r==0)
		printf("%d\n",i);
	}
	return 0;
}