#include<stdio.h>
int getfirstDayOfTheYear(int year){
	int day =(year*365 + ((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
	return day;
}
int main(){
	
   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int daysInMonth[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int i,j,totalDays,weekday=0,spaceCounter=0,year;
   printf("Enter your favorite year:\n");
   scanf("%d", &year);
   printf("\n\n************** Welcome To My calender project by RIN %d ****************\n\n",year);
   
   //cheak if it is a leap year:
   if((year%4==0 && year % 100 != 0)||(year % 400 == 0)){
   	daysInMonth[1] = 29;
   }
   //get the first day of the year:
   weekday = getfirstDayOfTheYear(year);
   
   for(i=0;i<12;i++){
   	printf("\n\n\n------------------%s------------------\n",months[i]);
   	printf("\n\n   Sun   Mon   Tue   Wed   Thus   Fry   Sat   \n");
   	
   	for(spaceCounter=1;spaceCounter<=weekday; spaceCounter++){
   		printf("      ");
	   }
   	totalDays=daysInMonth[i];
   	for(j=1; j <= totalDays;j++){
   		printf("%6d", j);
   		weekday++;
   		if(weekday>6){
   			weekday=0;
   			printf("\n\n\n\n");
		   }
	   }
   	
   }
   
   return 0;	
}
