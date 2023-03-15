#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,op;
	printf("enter numbers-");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	op=((a-b/c*d+e)*(f+g));
	printf("%d",op);
	return 0;
}
	
