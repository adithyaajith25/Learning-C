#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the 2 numbers here-");
	scanf("%f",&a);
	printf("and here-");
	scanf("%f",&b);
	c=a>b?a:b;
	printf("%0.2f is the greatest.",c);
	return 0;
}

