#include <stdio.h>
#include <string.h>

int priority(char);
void pushchar(char);
char popchar();
void inftopost(char[],char[]);
void display(char[]);

char A[20],B[20];

int topA=-1,topB=-1,size=20;

void main(){
	char s[20]={}, g[20]={};
	printf("Enter Infix Exp: ");
	gets(s);
	inftopost(s,g);
	void display(g);
	
	
}

int priority(char a){
	if(a=='^')
		return 0;
	else if(a=='/' || a=='*')
		return 1;
	else if(a=='+' || a=='-')
		return 2;
	else{
		printf("Invalid option\n");
		return -1;
	}
}

void pushchar(char item){
	if(topA==size-1){
		printf("Stack full.\n");
	}else{
		topA++;
		A[topA]=item;
	}
}

char popchar(){
	if(topA==-1){
		printf("Stack empty\n");
	}else{
		printf("Removed element is %d.\n",A[topA]);
		return A[topA];
		topA--;
	}
}

void inftopost(char s[20],char g[20]){
	for (int i=0;i<strlen(s);i++){
		if(isdigit(s[i]))
			g[strlen(g)]=s[i];
		else if(s[i]=='(')
			pushchar('(');
		else if(s[i]==')'){
			while (s[i]!='('){
				g[strlen(g)]=popchar();
	}
}
			
void display(char x[11]){																			//test
	if(topA==-1){
		printf("Stack empty.\n");
	}else{
		int j=0;
		for(j=0;j<=topA;j++)
			printf("%d\n",x[j]);
		
	}
	
}
	






















