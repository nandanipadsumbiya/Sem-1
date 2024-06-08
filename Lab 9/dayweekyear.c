#include<stdio.h>
   void main(){
   	    int year,day,week,days;
   	    printf("Enter num of days:");
   	    scanf("%d",&days);
   	    year=days/365;
   	    week=(days-year*365)/7;
   	    day=(days-year*365-week*7);
   	    printf("%d,%d,%d",year,week,day);
   }
