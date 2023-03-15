#include <stdio.h>
#define PI 3.14156
int main()
{
	float rad,Area;
	printf("enter radius");
	scanf("%f",&rad);
	Area=PI*(rad*rad);
	printf("Area is %f\n",Area);
	return 0;
}

