#include <stdio.h>
int main()
{
	int d,m,d1;
	printf("Enter the no of days here-");
	scanf("%d",&d);
	m=d/30;
	d1=d%30;
	printf("%d months and %d days.",m,d1);
	return 0;
}

