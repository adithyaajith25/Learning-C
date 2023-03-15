#include <stdio.h>
int main()
{
	int a,b;
	printf("value of a-");
	scanf("%d",&a);
	printf("value of b-");
	scanf("%d",&b);
	printf("a&b-%d\n",a&b);
	printf("a|b-%d\n",a|b);
	printf("a^b-%d\n",a^b);
	printf("a>>2-%d\n",a>>2);
	printf("a<<2-%d\n",a<<2);
	return 0;
}

