#include <stdio.h>
void swap(int *p, int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int a,b,c;
	printf("Enter the 2 numbers a and b resp: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("A is %d and b is %d after the swap.\n",a,b);
	return 0;
}

