#include <stdio.h>
int main(){
	int a,b=0,s,j=0;
	printf("Enter number- ");
	scanf("%d",&a);
	int c=a,i;
	for(c;c>0;c/=10){
		i=a;
		s=1;
		for(i;i>0;i/=10){
			s*=c%10;
		}
		b+=s;
		j+=1;
	}
	if(b==a)
		printf("ARMSTRONG\n");
	else
		printf("NOT ARMSTRONG\n");
	return 0;
}
