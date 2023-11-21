#include<stdio.h>
     struct book{
    char booktitle[100];
    char authorname[100];
    char publication[100];
    int price;
};
int main(){
	struct book abc;
	int i;
	for(i=0;i<3;i++){
		printf("Enter a booktitle %d:",i);
		scanf(" %s",&abc.booktitle);
			//	gets(abc.booktitle);
		printf("Enter a author name for book %d:",i);
		scanf(" %s",&abc.authorname);
		//gets(abc.authorname);
		printf("Enter a publication for book %d:",i);
		scanf(" %s",&abc.publication);
		//gets(abc.publication);
		printf("Enter a price for book %d:",i);
		scanf("%d",&abc.price);
	}
	for(i=0;i<3;i++){
		printf("booktitle %d=%s\n",i,abc.booktitle);
		printf("authorname %d=%s\n",i,abc.authorname);
		printf("publication %d=%s\n",i,abc.publication);
		printf("price %d=%d\n",i,abc.price);
	}
}
