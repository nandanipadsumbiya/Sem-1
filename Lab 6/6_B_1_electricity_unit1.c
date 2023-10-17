#include<stdio.h>
void main(){
	int unit;
	float bill,totalbill;
	printf("Enter a unit");
	scanf("%d",&unit);
	if(unit<50){
		bill= unit*0.50;
	}
	if(unit>50&&unit<150){
		bill=50*0.50+(unit-50)*0.75;
	}
	if(unit>150&&unit<250){
		bill=50*0.5+100*0.75+(unit-150)*1.20;
	}
	if(unit>250){
		bill=50*0.5+100*0.75+100*1.20+(unit-250)*1.5;
	}
	  totalbill=(bill+bill)*0.2;
	printf("%f",bill);
}
