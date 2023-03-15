#include <stdio.h>
int a[20],size=20,flag=0,returnsearch=0;
void build_tree(int i, int item){
	int d=0;
	a[i]=item;
	printf("Does the data %d have LCHILD ?(Yes-1 / N0-2) - ",item);
	scanf("%d",&d);
	if(d==1){
		int item1;
		printf("Enter LCHILD of %d - ",item);
		scanf("%d",&item1);
		printf("\n");
		build_tree(2*i,item1);
		
	}
	printf("Does the data %d have RCHILD ?(Yes-1 / N0-2) - ",item);
	d=0;
	scanf("%d",&d);
	if(d==1){
		int item1;
		printf("Enter RCHILD of %d - ",item);
		scanf("%d",&item1);
		printf("\n");
		build_tree((2*i)+1,item1);
		
	}
}

int search_seq(int i,int item){
	
	if(flag==0){
		if(a[i]==item){
			flag=1;
			returnsearch=i;
		}
		else{
			if(2*i<=size){
				search_seq(2*i,item);
			}
			if((2*i)+1<=size){
				search_seq((2*i)+1,item);
			}
		}
	}
}

void insert_seq(int key,int item){
	search_seq(1,key);
	int i=returnsearch;
	if(i==0){
		printf("Search Unsuccessfull\n\n");
	}
	else{
		if(a[2*i]==0 || a[(2*i)+1]==0){
			printf("Insert as LCHILD(1) or RCHILD(2)? - ");
			int abc;
			scanf("%d",&abc);
			if(abc==1){
				if(a[2*i]==0){
					a[2*i]=item;
				}
				else{
					printf("Insertion not possible in LCHILD");
				}
			}
			else if(abc==2){
				if(a[(2*i)+1]==0){
					a[(2*i)+1]=item;
				}
				else{
					printf("Insertion not possible in RCHILD");
				}
			}
			else{
				printf("Invalid option");
			}
		}
		else{
			printf("INSERION NOT POSSIBLE AS LEAF NODE.");
		}
	}
}

void delete_seq(int item){
	search_seq(1,item);
	int i=returnsearch;
	if(i==0){
		printf("NO such elements Exist.");
	}
	else{
		if(a[2*i]==0 && a[(2*i)+1]==0){
			a[i]=0;
		}
		else{
			printf("Element not a LEAF NODE.");
		}
	}
}				
					

int main(){
	printf("Enter root element of list-");
	int root;
	scanf("%d",&root);
	build_tree(1,root);
	for(int i=1;i!=20;i++){
		if(a[i]==0){
			printf(" - ");
		}
		else{
			printf(" %d ",a[i]);
		}
	}printf("\n");
	int j=20;
	while(j>0){
		
		int item=0;
		printf("1 to insert.\n2 to delete.\n3 to search.\n----any other value to exit.-----\n\t");
		scanf("%d",&j);
		if(j==1){
			flag=0;	returnsearch=0;
			printf("Enter element to be inserted and the parent element - ");
			int a,b;
			scanf("%d  %d",&a,&b);
			insert_seq(b,a);
			printf("\n\n");
		}
		else if(j==2){
			flag=0;	returnsearch=0;
			printf("Enter element to be deleted - ");
			int a;
			scanf("%d",&a);
			delete_seq(a);
			printf("\n\n");
		}
		else if(j==3){
			flag=0;
			printf("Enter element to be searched - ");
			scanf("%d",&item);
			returnsearch=search_seq(1,item);
			if(flag==0){
				printf("\t\tElement NOT found");
			}
			else{
				printf("\t\tElement found");
			}
			printf("\n\n");
		}
		else{
			printf("--EXITING--\n\n");
			j=-10;
		}
		for(int i=1;i!=20;i++){
			if(a[i]==0){
				printf(" - ");
			}
			else{
				printf(" %d ",a[i]);
			}
		}printf("\n");
	}
}
