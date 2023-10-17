#include<stdio.h>
void main(){
	int basicsalary;
	float hra,da,gross,n;
	printf("Enter basic salary:");
	scanf("%d",& basicsalary);
	scanf("%f,%f",&hra,&da);
	if(basicsalary>=10000 && basicsalary<20000){
		hra=(20/100)*basicsalary,da=(80/100)*basicsalary;
		gross=hra+da+basicsalary;
		printf("%f",gross);
	}
	else if(basicsalary>=20000 && basicsalary<30000){
		hra=(25/100)*basicsalary,da=(90/100)*basicsalary;
		gross=hra+da+basicsalary;
		printf("%f",gross);
	}
	else if(basicsalary>=30000){
		hra=(30/100)*basicsalary,da=(95/100)*basicsalary;
		gross=hra+da+basicsalary;
		printf("%f",gross);
	}

}
