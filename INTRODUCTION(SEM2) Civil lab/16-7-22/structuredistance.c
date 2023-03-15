#include <stdio.h>
struct distance{
	int dist;
}d1,d2;
int main(){
	int tot;
	printf("Enter the 2 distances-");
	scanf("%d %d",&d1.dist,&d2.dist);
	
	tot=d1.dist+d2.dist;
	printf("sum is %d.\n",tot);
	return 0;
}

