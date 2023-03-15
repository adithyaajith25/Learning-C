#include <stdio.h>
int Adj[10][10],n,A[10];
void build(){
	printf("Enter the number of vertices- ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("Enter element %d - ",i);
		scanf("%d",&A[i]);
	}		
		
	for (int i=0;i<n;i++){
		int k=1;
		while(k!=0){
			printf("Does %d have adjacent vertex?(1/0)",A[i]);
			scanf("%d",&k);
			if(k==1){
				int v;
				printf("Enter the VERTEX- ");
				scanf("%d",&v);
				for(int j=0;j<n;j++){
					if(A[j]==v){
						Adj[i][j]=1;
					}
				}
				for(int j=0;j<n;j++){
					if(Adj[i][j]!=1)
						Adj[i][j]=0;
				}
			}
			else{
				k=0;
			}
		}
	}
				

}			

void dispm(int A[50][50],int n){				//display
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("  %d  ",A[i][j]);
		printf("\n");
	}
}

int main(){
	build();
	dispm(Adj,n);
	
	return 0;
}
