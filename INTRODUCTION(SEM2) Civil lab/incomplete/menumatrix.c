#include<stdio.h>
void mult(int x[][20],int y[][20]);
int m,n,o,p,A[20][20],B[20][20],a;
int main(){
	
	printf("enter number of rows and column of matrix 1: ");
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter element : ");
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter number of rows and column of matrix 2: ");
	scanf("%d %d",&o,&p);
	for(int i=0;i<o;i++){
		for(int j=0;j<p;j++){
			printf("Enter element : ");
			scanf("%d",&B[i][j]);
		}
	}
	while(a!=0){
		printf("Enter 1 to multiply the matrix a with b\nEnter 2 to add the 2 matrices\nEnter 3 to display transpose of matrix: ");
		scanf("%d",&a);
		switch (a){
			case 1:
				if(m==n)
					mult(A,B);
				else
					printf("Number of columns of first does not equal number of rows of the second.");
				break;
			case 2:
				add(A,B);
				break;
			case 3:
				transp(A);
				transp(B);
				break;
			default:
				printf("Enter correct value");
		}
	}
	return 0;
	
}
void mult(int x[][20],int y[][20]){
	int C[20][20];
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<n;k++){
				C[i][j]+=A[i][k] * B[k][j];				
			}
		}
	}		
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			printf("%d\t",C[i][j]);
		}
	printf("\n");
	}
}
	
				
