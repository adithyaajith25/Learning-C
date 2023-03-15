#include <stdio.h>
#include <stdlib.h>
struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
};
struct node *root=NULL;
void build_tree(struct node **ptr, int item){
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	
	printf("Does the node %d have lCHILD? (1/0)",new->data);
	int i=0;
	scanf("%d",&i);
	int item1;
	if (i==1){
		printf("Enter DATA - ");
		scanf("%d",&item1);
		build_tree(&(new->lchild),item1);
	}
	i=0;	item1=0; 
	printf("Does the node %d have RCHILD? (1/0)",new->data);
	scanf("%d",&i);
	if (i==1){
		printf("Enter DATA - ");
		scanf("%d",&item1);
		build_tree(&(new->rchild),item1);
	}
	*ptr=new;
}

void inorder(struct node **ptr){
	struct node *ptr2=*ptr;
	if(ptr2!=NULL){
		inorder(&ptr2->lchild);
		printf("%d ",ptr2->data);
		inorder(&ptr2->rchild);
	}
}

int main(){
	printf("Enter root node data - ");
	int rootd;
	scanf("%d",&rootd);
	build_tree(&root,rootd);
	
	inorder(&root);
}
	
	
	  
	
