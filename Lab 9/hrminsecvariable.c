#include<stdio.h>
  void main(){
  	int sec,n,hour,min;
  	printf("Enter n:");
  	scanf("%d",&n);
  	hour=n/3600;
  	min=(n-hour*3600)/60;
  	sec=(n-hour*3600-min*60);
  	printf("Time=%d:%d:%d",hour,min,sec);
}
