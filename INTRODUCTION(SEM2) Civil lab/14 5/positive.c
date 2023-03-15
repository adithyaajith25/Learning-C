#include<stdio.h>
int main(){
	int a;
	printf("Enter number");
	scanf("%d",&a);
	if(a>0)
		printf("Number is positive.");
	else if(a<0)
		printf("Number is Negative.");
	else
		printf("Number is 0");
	printf("\n");
	return 0;
} 
