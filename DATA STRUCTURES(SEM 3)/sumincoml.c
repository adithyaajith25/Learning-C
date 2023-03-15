#include <stdio.h>
void readmatrix(int[][50],int,int);
void dispm(int[][50],int,int); 
int tup(int[][50],int[][50],int,int);
void tpose(int[][50],int[][50],int);


int main(){
	int A[20][50],B[20][50],T[20][50],U[20][50],R[20][50],m,n;
	printf("Enter the size of row and column of both matrices: ");
	scanf("%d %d",&m,&n);
	printf("\n");
	printf("---------------A------------------\n");
	readmatrix(A,m,n);
	dispm(A,m,n);
	printf("\n");
	printf("---------------B------------------\n");
	readmatrix(B,m,n);
	dispm(B,m,n);
	printf("\n");
	int k=tup(A,T,m,n);
	k=tup(B,U,m,n);
	//dispm(T,k,3);
	printf("Sum:-\n");
	sum(T,U,R,k);
	dispm(R,k,3);
	printf("\n");
	
}


void readmatrix(int A[50][50],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter element: ");
			scanf("%d",&A[i][j]);
		}
	}
}

void dispm(int A[50][50],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("\t%d\t",A[i][j]);
		printf("\n");
	}
}

int tup(int A[][50],int B[][50],int m,int n){
	B[0][0]=m;
	B[0][1]=n;
	int k=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]!=0){
				B[k][0]=i;
				B[k][1]=j;
				B[k][2]=A[i][j];
				k++;
			}
		}
	}
	B[0][2]=k-1;
	return k;
	
}

void sum(int A[][50], int B[][50],int C[][50],int m){
	C[0][0]=A[0][0];
	C[0][1]=A[0][1];
	
	int k=1,l=1;
	C[0][2]=m-1;
	for(int i=0;i<A[0][0];i++){ 
		for(int j=0;j<A[0][2];j++){
			C[k][0]=A[k][0];
			C[k][1]=A[k][1];
			C[k][2]=A[k][2]+B[k][2];
			k++;
		}
	}
}

		
	
					
	
	
	
	
	
	
	
	
	
	
	
	
	
		
