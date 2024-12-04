#include<stdio.h>

int getFirstDayOfTheYear(int year){
	int day = (year*365+ ((year-1)/4) - ((year-1) / 100) + ((year-1)/400)) % 7;
	return day;
	}

    int main(){
	   char *months []={"January","Februay","March","April","May","June","July","August","september","October","November","december",};
	   int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
	   int i, j, totaldays,weekday=0, spaceCounter=0,year;
	   
	   printf("Enter Your Favorite Year:\n");
	   scanf("%d",&year); 
	   printf("\n\n*************Welcome to %d My Calender App by ZIDAN **************\n\n",year);
	   
	   //Check if it is a leap year
	   if ((year%4==0 && year % 100 !=0) || (year % 400 ==0)){
	   	    daysInMonth[1] = 29;
	   }
	   
	    //Get the first day of the year 
	    weekday = getFirstDayOfTheYear(year);
	   
	   for(i =0; i<12; i++){
	   	  printf("\n\n\n------------------- %s ----------------------\n",months[i]);
	   	  printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
	   	  
	   	  for(spaceCounter = 1; spaceCounter <= weekday; spaceCounter++){
		     printf("      ");
	      }
	      
	      totaldays = daysInMonth[i];
	      for(j = 1; j <= totaldays; j++){
		      printf("%6d",j);
		      weekday++;
		      if(weekday >6){
		      	  weekday =0;
		      	printf("\n");
			  }
	       }
	    }
		return 0;  
	}
