#include <stdio.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
	
void insert(int data1){
	printf("\n\tEnter:-\n1 for Insertion at front\n2 for Insertion at rear\n3 for Insertion after specified node => ");
	int c;
	scanf("%d",&c);
	if(c==1){
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data1;
		new->link=head;
		head=new;
	}
	else if(c==2){
		struct node *new=(struct node*)malloc(sizeof(struct node));
		new->data=data1;
		new->link=NULL;
		if(head==NULL){
			head=new;
		}
		else{
			struct node *ptr=head;
			while(ptr->link!=NULL)
				ptr=ptr->link;
			ptr->link=new;
		}
	}
	else if(c==3){
		if(head==NULL)
			printf("Empty list\n\n");
		else{
			printf("ENTER Search node data here");
			int a;
			scanf("%d",&a);
			struct node *ptr=head;
			while(ptr->data!=a && ptr!=NULL){
				ptr=ptr->link;
			}
			if(ptr==NULL)
				printf("No such node.\n\n");
			else{
				struct node *new=(struct node*)malloc(sizeof(struct node));
				new->data=data1;
				new->link=ptr->link;
				ptr->link=new;
			}
		}
	}
	else
		printf("INVALID OPTION\n\n");

	
	
}

void delete(){
	if(head==NULL){
		printf("Empty list\n\n");
	}
	else{
		int a;
		printf("\n\tEnter:-\n1 for deletion from front\n2 for deletion from end\n3 for deleting a specified node => ");
		scanf("%d",&a);
	
		if(a==1){
			if(head==NULL){
				printf("Empty list\n\n");
			}
			else{
				struct node *temp=head;
				head=head->link;
				free(temp);
			}
		}
		else if(a==2){
			if(head==NULL){
				printf("Empty list\n\n");
			}
			else if(head->link==NULL){
				struct node *temp=head;
				head=NULL;
				free(temp);
			}
			else{
				struct node *temp=head->link;
				struct node *prev=head;
				while(temp->link!=NULL){
					prev=temp;
					temp=temp->link;
				}
				prev->link=NULL;
				free(temp);
			}
		}
		else if(a==3){
			if(head==NULL){
				printf("Empty list\n\n");
			}
			int data2;
			printf("Enter node data here ");
			scanf("%d",&data2);
			struct node *ptr=head;
			if(head->data==data2){
				head=head->link;
				free(ptr);
			}
			else{
				struct node *prev=head;
				ptr=head;
				while(ptr->data!=data2 && ptr!=NULL){
					prev=ptr;					
					ptr=ptr->link;
				}
				if(ptr==NULL){
					printf("NO such nodes.\n\n");
				}
				else{
				prev->link=ptr->link;
				
				free(ptr);
				}
			}
		}
		else{
			printf("INVALID OPTION.\n\n");			
		}
	}
}	
		
	
void display(){
	if(head==NULL){
		printf("EMPTY LIST FOUND\n");
	}
	else{
		struct node *ptr=head;
		while(ptr!=NULL){
			printf("%d\t",ptr->data);
			ptr=ptr->link;
		}
	printf("\n");
	}
}
			

int main(){
	int choice=0;
	while(choice>=-1){
		printf("\nEnter\n1 for insertion\n2 for deletion\n and others for exit => ");
		
		scanf("%d",&choice);
		if(choice==1){
			printf("Enter data =>");
			int data;
			scanf("%d",&data);
			insert(data);
			display();
		}
		else if(choice==2){
			delete();
			display();
		}
		else
			choice=-10;
	}
	
	return 0;	
}
