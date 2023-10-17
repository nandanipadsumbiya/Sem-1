#include<stdio.h>
void main(){
	char letter,a,e,i,o,u;
	
	printf("Enter letter");
	scanf("%c",&letter);
	
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='o'||letter=='U'){
		printf("letter is vowel");
	}
	else{
		printf("letter is consonant");
	}
}
