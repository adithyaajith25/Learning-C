#include <stdio.h>
#include <string.h>
int main(){
	char A[100];
	int i=0;
	printf("Enter string- ");
	gets(A);
	for(i;A[i]!='\0';i++){}
	printf("Count= %d ",i+1);
	return 0;
}
