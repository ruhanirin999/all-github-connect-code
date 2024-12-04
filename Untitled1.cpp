#include<stdio.h>
int main(){
int i,a,b,c;
a=0;
b=1;
	printf("%d\n%d\n",a,b);
	for(i=1;i<=13;i++){
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	
	return 0;
}