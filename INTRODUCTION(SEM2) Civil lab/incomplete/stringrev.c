#include <stdio.h>
#include<string.h>
void reverse(char c[]);
int main(){
	char a[200],b[200][2000];
	printf("Enter string-");
	gets(a);
	puts(a);
	b[0][2000]=a;
	reverse(b);
	printf("4444");
	return 0;
}
void reverse(char c[]){
	int n=0;
	char d[200][2000];
	while(c[n]!="0"){
		int i=0;
		i=strlen(c[n]);
		for(int j=0;j<i;j++){
			d[n][j]=c[n][i-1];		
			i--;
		}
		printf("%s\n",d[n]);
		
	}
	n++;
}
