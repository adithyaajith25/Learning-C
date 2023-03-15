#include <stdio.h>
int main()
{
	int a,n,s=0,j=0;
	printf("Enter the count here-");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		int b;
		printf("Enter element-");
		scanf("%d",&b);
		A[i]=b;
	}
	for(j;j<n;j++){
		s+=A[j];
	}printf("sum is %d.\nAverage is %f.\n",s,(float)s/n);
	
	return 0;


}

