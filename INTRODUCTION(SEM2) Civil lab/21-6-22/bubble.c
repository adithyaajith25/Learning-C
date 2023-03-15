#include <stdio.h>
int main()
{
	int a,d,c=0,n;
	printf("Enter the count here-");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		int b;
		printf("Enter element-");
		scanf("%d",&b);
		A[i]=b;
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n-j-1;i++){
			int c=0;
			if(A[i]>A[i+1]){
				c=A[i+1];
				A[i+1]=A[i];
				A[i]=c;
			}
		}
	}for(int k=0;k<n;k++)
		printf("%d ",A[k]);
		
	printf("\n");
	return 0;
}
