#include<stdio.h>
float max(float x,float y,float z){
	if(x>y && x>z){
		return x;
	}
	else if(y>x && y>z){
		return y;
	}
	else{
		return z;
	}
}
void main(){
	float x,y,z;
	printf("Enter a value of x y z:");
	scanf("%f %f %f",&x,&y,&z);
	float ans=max(x,y,z);
	printf("max=%f",ans);
}
