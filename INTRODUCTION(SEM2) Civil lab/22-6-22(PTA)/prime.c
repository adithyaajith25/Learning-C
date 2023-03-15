#include <stdio.h>
int main(){
	int a,c=0,j=0;
	printf("Enter number- ");
	scanf("%d",&a);
	for(int i=2;i<=(a/2);i++){
		if(a%i==0)
			c+=1;
	}
	if(c==0)
		printf("PRIME\n");
	else
		printf("NOT PRIME\n");
	return 0;
}
