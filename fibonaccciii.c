#include<stdio.h>
int main(){
	int a,b,c;
	a=0;
	b=1;
	printf("%d\n%d\n",a,b);
	for(c=1;c<=1000;c=a+b){
		
		printf("%d\n",c);
		a=b;
		b=c;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}