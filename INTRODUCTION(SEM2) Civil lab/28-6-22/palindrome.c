#include <stdio.h>
#include <string.h>
int main(){
	int i=0,g=0;
	char A[]={};
	printf("Enter the string: ");
	gets(A);
	for(i;i<strlen(A);i+=1){
		printf("%d\n",i);
		if(A[i]!=A[strlen(A)-1-i]){
			printf("Not pallindrome\n");
			g=10;
			break;
		}
	}if(g==0) 
		printf("Pallindrome\n");
	return 0;
}
