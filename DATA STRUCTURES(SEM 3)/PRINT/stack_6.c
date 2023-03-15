#include<stdio.h>
void push1(int);
void pop();
void display();
void status();
int A[10],size=10,top=-1;

int main(){
	int i=1,a;
	while(i!=0){
		printf("Enter:-\n1)Push,\n2)Pop,\n3)Display,\n4)Status,\n0)Exit: ");
		scanf("%d",&i);
		switch(i){
			case 0:
				break;
			case 1:
				printf("Enter element: ");
				scanf("%d",&a);
				push1(a);
				printf("***************\n\n");
				break;
			case 2:
				pop();
				printf("***************\n\n");
				break;
			case 3:
				display();
				printf("***************\n\n");
				break;
			case 4:
				status();
				printf("***************\n\n");
				break;
			default:
				printf("Invalid option.\n");
				printf("***************\n\n");
		
		}
	}
	
	return 0;
	
}

void push1(int item){
	if(top==size-1){
		printf("Stack full.");
	}else{
		top++;
		A[top]=item;
	}
}

void pop(){
	if(top==-1){
		printf("Stack empty");
	}else{
		printf("Removed element is %d.\n",A[top]);
		top--;
	}
}

void display(){
	if(top==-1){
		printf("Stack empty.\n");
	}else{
		int j=0;
		for(j=0;j<=top;j++)
			printf("%d\n",A[j]);
		
	}
	
}
void status(){
	if(top==-1)
		printf("Stack empty.\n");
	else{
		if(top==size-1)
			printf("Stack full.\n");
		else
			printf("Number of free space is-%d\n",(size-top-1));
		
	}
}
	
	
	
	
	
	
	
	
	
		
