#include<stdio.h>
int main(){
	int i;
	float a=0,s=0;
	for(i=1;i<=5;i++){
		printf("Enter mark %d:",i);
		scanf("%f",&a);
		s+=a;
	}s/=5;
	if(s>=90)
		printf("GRADE A\n");
	else if(s>=80)
		printf("GRADE B\n");
	else if(s>=70)
		printf("GRADE C\n");
	else if(s>=60)
		printf("GRADE D\n");
	else if(s>=50)
		printf("GRADE E\n");
	else if(s>=40)
		printf("GRADE F\n");
	else
		printf("FAILED\n");
	return 0;
}
