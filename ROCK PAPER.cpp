#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game
{
	if(you==computer)
	return-1;
	if(you=='s'&&computer=='p')
	return 0;
	else if(you=='p'&& computer=='s')
	return 1;
	if(you=='s'&& computer =='z')
	return 1;
	else if(you=='z'&&computer=='p')
	return 1;	
}
int main()
{
	int n;
	char you,computer,result;
	srand(time(NULL));
	n=rand()%100;
	if(n<33)
	computer='s';
	else if(n>33&&n<66)
	comouter='p'
	else
	computer 'z';
	printf("\n\n\n\n\t\t\t\tEnter s for STONE,p for PAPER and z for SCISSOR")
}