#include <stdio.h>
void linear(int[],int,int);
void binary(int[],int,int);
int main(){
	int n,A[20],c,s;
	printf("Enter no of elements=");
	scanf("%d",&n);
	
	printf("USER IS ADVISED TO ENTER ELEMENTS IN A SORTED MANNER.\n\n");
	for(int i=0;i<n;i++){
		printf("Enter element no %d = ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("Enter search element here=");
	scanf("%d",&s);
	printf("Input 1 or 2 for Linear or Binary search respectively=");
	scanf("%d",&c);
	if(c==1)
		linear(A,s,n);
	else if(c==2)
		binary(A,s,n);
	else
		printf("Incorrect option\n");
	return 0;
}

void linear(int A[20],int s,int n){
	int f=0;
	for(int i=0;i<n;i++){
		if(A[i]==s){
			printf("Element found on index %d.\n",i);
			f=1;
			break;
		}
	}
	if(f!=1)
		printf("Element not found.\n");
}



void binary(int A[20],int s,int n){
	int low=0;
	int high=n-1;
	int mid,f=0;
	
	while(high>=low){
		mid=(high+low)/2;
		if(A[mid]==s){
			printf("Element found on index %d.\n",mid);
			f=1;			
			break;
		}
		else if(s>A[mid])
			low=mid+1;
		
		else 
			high=mid-1;
	}
	if(f!=1)
		printf("Element not found.\n");
			
}


















		

		
