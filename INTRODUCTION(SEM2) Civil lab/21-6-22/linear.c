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
	}printf("Enter the Element to be searched here-");
	scanf("%d",&d);
	for(int j=0;j<n;j++){
		if(d==A[j])
			c=1;
	}

	if(c==1)
		printf("Number found\n");
	else
		printf("Number not found.\n");
	return 0;
}  

    
	
