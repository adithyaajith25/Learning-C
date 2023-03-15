#include<stdio.h>
#include<string.h>

int main(){
int i=0,j=0,vow=0,con=0,sp=0,num=0;
	char A[]={},B[10]={'a','e','i','o','u','A','E','I','O','U'};
	printf("Enter the string: ");
	gets(A);
	
		for(i;i<strlen(A);i++){
			if (isalpha(A[i])==0){
				for(int j=0;j<10;j+=1){
					if(A[i]==B[j]){
						printf("j=\n",j);
						vow+=1;
						i+=1;
						continue;
					}
				con+=1;
				}
			}
			else if(isdigit(A[i])==0){
				num+=1;
			}
				
			else if(A[i]==" "){
				sp+=1;
				}			
		}
	printf("Vowels=%d, consonants=%d, numbers=%d, spaces=%d\n",vow,con,num,sp);
	return 0;
}
