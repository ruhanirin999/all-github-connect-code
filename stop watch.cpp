#include<stdio.h>
#define cycle 5

#ifdef _WIN32
#include<conio.h>
#define clrscr() printf("\e[]1;1H\e[2J")

#else
#include<unistd.h>
#endif

int main(){
	int hour, minute, second;
	printf("Enter hour minute second:");
	scanf("%d%d%d", &hour, &minute, &second);
	clrscr();
	int h = 0, m = 0, s = 0;
	while(1){
	
	
	printf("%.2d:%.2:%.2d\n", h, m, s);
	if(h== hour && m== minute && s== second){
		break;
		
		}else
		{
			clrscr();
		}
	}
	s++;
    sleep(1);
	if(s==cycle){
		m++;
		s = 0;
	}
	if(m== cycle){
		h++;
		m==0;
	}
	return 0;
}
}