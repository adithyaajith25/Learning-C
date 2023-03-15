#include <stdio.h>
int main(){
	int A[20],n,*p;
	p=&A;
	printf("Enter size of array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter element number %d:",i+1);
		scanf("%d",p);
		p++;
	}
	p=&A;
	printf("The elements of the array are: ");
	for(int i=0;i<n;i++){
		printf("%d\t",*p);
		p++;
	}
	printf("\n");
	return 0;
}
