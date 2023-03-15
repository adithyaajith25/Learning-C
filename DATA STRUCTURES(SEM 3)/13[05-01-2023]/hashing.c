#include <stdio.h>
int tab1[10]={0};

void display(){
	printf("\n\nindex	element\n ");
	for(int i=0;i<10;i++){
		printf("  %d	  %d\n ",i,tab1[i]);
	}
	printf("\n");
}


void divread(int n){
	int ind; 
	for(int i=0;i<n;i++){
		int key;
		printf("Enter element- ");
		scanf("%d",&key);
		ind=key%10;
		tab1[ind]=key;
	}
}
void divsearch(int key){
	if(tab1[key%10]==key){
		printf("FOUND\n");
	}
	else{
		printf("NOT FOUND");
	}
}

int linsearch(int key){
	int ind=key%10;
	if(tab1[ind]==key){
		return ind;
	}
	else if(tab1[ind]==0){
		return -1;
	}
	else{
		int j=(ind+1)%10;
		while(j!=ind){
			if(tab1[j]==key){
				return j;
			}
			else if(tab1[j]==0){
				return -1;
			}
			j=(j+1)%10;
			
		}
		if(j==ind){
			return -2;
		}
	}
}
	


void linearread(int n){
	int ind; 
	for(int i=0;i<n;i++){
		int key;
		printf("Enter element- ");
		scanf("%d",&key);
		ind=key%10;
		if(tab1[ind]==0)
			tab1[ind]=key;
		else{
			int j=(ind+1)%10;
			while(j!=ind){
				if(tab1[j]==0){
					tab1[j]=key;
					break;
				}
				else{
					j=(j+1)%10;
				}
			}
			if(j==ind){
				printf("overflow\n");
			}
		}
	}
}
				


int main(){
	printf("Enter   1-for Division Hashing\n\t2-for linear probing\n\t\t-");
	int choice;
	scanf("%d",&choice);
	int n,key2;
	switch(choice){
		case 1:
			printf("Enter number of elements to be inserted- ");
			scanf("%d",&n);
			divread(n);
			display();
			
			printf("Enter element to be searched- ");
			scanf("%d",&key2);
			divsearch(key2);
			break;
		
		case 2:
			printf("Enter number of elements to be inserted- ");
			scanf("%d",&n);
			linearread(n);
			display();
			
			printf("Enter element to be searched- ");
			scanf("%d",&key2);
			int j=linsearch(key2);
			if(j==-1){
				printf("Element not found but can be inserted\n");
			}
			else if(j==-2){
				printf("Element not found and OVERFLOW\n");
			}
			else{
				printf("Element found in %d position\n",j);
			}
			break;
		
		default:
			printf("INCORRECT CHOICE\n");
	}
	printf("\n");
	return 0;
}
			
		
