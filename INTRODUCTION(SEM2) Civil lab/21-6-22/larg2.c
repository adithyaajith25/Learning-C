#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the 3 numbers here-");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("%.2f is greatest\n",a);
		else
			printf("%.2f is greatest\n",c);
	}
	else if(a<b){
		if(b>c)
			printf("%.2f is greatest\n",b);
		else
			printf("%.2f is greatest\n",c);
	}
	return 0;


}

