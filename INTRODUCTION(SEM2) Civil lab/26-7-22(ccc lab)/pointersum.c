#include <stdio.h>
int main(){
	int a=5,b=10;
	int *p, *q;
	p=&a; q=&b;
	printf("sum is %d.",*p+*q);
	return 0;
}
