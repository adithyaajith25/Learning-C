#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a-");
	scanf("%d",&a);
	printf("enter b-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	return 0;
}
