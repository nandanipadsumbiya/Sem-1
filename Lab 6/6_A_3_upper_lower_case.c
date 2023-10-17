#include<stdio.h>
void main(){
	int temp;
	printf("Enter:");
	scanf("%c",&temp);
	if(temp>='A' && temp<='Z'){
		printf("the char is upper case ");
	}
	else if(temp>= 'a' && temp<= 'z'){
		printf("the char is lower case");
	}
    else if(temp>=48 && temp<=57){
		printf("the char is digit");
	}
	else{
		printf(" the char is special char");
	}
}
