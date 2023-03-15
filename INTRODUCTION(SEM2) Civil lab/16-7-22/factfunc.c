#include <stdio.h>
int factrec(int);
int factnrec(int);
int main(){
	unsigned long int n;
	printf("Enter number-");
	scanf("%d",&n);
	printf("Using Recursive function-%llu\n",factrec(n));
	printf("Using Recursive function-%llu\n",factnrec(n));
	return 0;
}
int factrec(int a){
	if(a==0||a==1)
		return 1;
	else
		return a*fact(a-1);
}
int factnrec(int a){
	if(a==0||a==1)
		return 1;
	else
		r=1;
		for(int i=1;i<a;i++){
			r*=1;
		return r;
}
