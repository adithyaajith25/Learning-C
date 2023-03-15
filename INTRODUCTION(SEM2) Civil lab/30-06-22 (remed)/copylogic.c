#include <stdio.h>
#include <string.h>
int main(){
	char A[100],B[100];
	int i=0;
	printf("Enter string A - ");
	gets(A);
	printf("Enter string B - ");
	gets(B);
	for(i;i<=strlen(B);i++){
		A[i+strlen(A)]=B[i];
	}printf("Strings are %s and %s.\n",A,B);
	return 0;
}
