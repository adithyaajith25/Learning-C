#include <stdio.h>
int main()
{
	float t,f;
	printf("Enter temperature in celcius");
	scanf("%f",&t);
	f=((1.8)*t)+32;
	printf("Temp in Faranheit-%.2f",f);
	return 0;
}

