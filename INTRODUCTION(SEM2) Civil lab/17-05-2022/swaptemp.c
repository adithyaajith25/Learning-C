#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a-");
	scanf("%d",&a);
	printf("enter b-");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	return 0;
}

