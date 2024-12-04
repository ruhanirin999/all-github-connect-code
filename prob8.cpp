#include<stdio.h>
int main(){
	double x,y,z,avg;//double can contain upto 15 digits in total.
	x=10,y=20,z=30;
	avg=(x+y+z)/3;
	
	printf("average of x,y and z is:%lf\n",avg);
	return 0;
}