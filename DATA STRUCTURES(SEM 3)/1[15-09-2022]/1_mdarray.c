#include <stdio.h>
int insertion(int[],int,int,int);
int deletion(int[],int,int);
int main(){
	int s,a,ar[20];
	printf("Enter size of array-");
	scanf("%d",&s);
	for(int i=0;i<s;i++){
		printf("Enter Array element %d-",i+1);
		scanf("%d",&ar[i]);
	}
	
	int j=12;
	while(j>0){
		printf("Enter menu option:-\n1.Insertion\n2.Deletion\n3.Display Array\nANY OTHER VALUE TO EXIT\n=");
		scanf("%d",&a);
		if(a==1){
			int x,y;
			printf("Enter element to be inserted and insertion index-");
			scanf("%d %d",&x,&y);
			s=insertion(ar,x,y,s);
			s++;
			printf("\n\n");
			
		}
		else if(a==2){
			int x;
			printf("Enter element to be deleted-");
			scanf("%d",&x);
			s=deletion(ar,x,s);
			s--;
			printf("\n\n");
		
		}
		else if(a==3){
			for(int i=0;i<s;i++){
				printf("%d ",ar[i]);
			}
			printf("\n\n");
		
			
		}
		else{
			printf("EXITING\n\n");
			j=-25;
		}	
	}
		
	return 0;
}

int insertion(int array[],int el,int ind,int s){
	if(sizeof(array)==s){
		printf("Array size incompatible\n");
		s--;
		
	}
	else{
		for(int i=s-1;i>=ind;i--)
			array[i+1]=array[i];
		array[ind]=el;
		printf("SUCCESSFULL\n");
	
	}
	return s;	
}

int deletion(int array[],int el,int s){
	int i=0;
	for(i;i<=s-1;i++){
		if(array[i]==el)
			break;
	}
	if(i==s){
		printf("ELEMENT NOT FOUND");
		s++;
	}
	else{
		for(i;i<=s-2;i++)
			array[i]=array[i+1];
		printf("SUCCESSFULL\n");
		
	}
	return s;
}
	
	



	

