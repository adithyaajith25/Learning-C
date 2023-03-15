#include <stdio.h>
#include <stdlib.h>
struct poly{
	int coeff;
	int expo;
	struct poly *link;
};
struct poly *phead=NULL;
struct poly *qhead=NULL;
struct poly *rhead=NULL;
struct poly AddPoly(struct poly **phead, struct poly **qhead){
	struct poly *p=*phead;
	struct poly *q=*qhead;
	struct poly *r=rhead;
	while(p!=NULL && q!=NULL){
		struct poly *new=(struct poly*)malloc(sizeof(struct poly));
		if((p->expo)==(q->expo)){
			new->coeff=p->coeff+q->coeff;
			new->expo=p->expo;
			new->link=NULL;
			p=p->link;
			q=q->link;
		}
		else if((p->expo)>(q->expo)){
			new->coeff=p->coeff;
			new->expo=p->expo;
			new->link=NULL;
			p=p->link;
		}
		else{
			new->coeff=q->coeff;
			new->expo=q->expo;
			new->link=NULL;
			q=q->link;
		}
		if(rhead==NULL){
			rhead=new;
			r=new;
		}
		else{
			r->link=new;
			r=r->link;
		}
	}
	while(p!=NULL){
		struct poly *new=(struct poly*)malloc(sizeof(struct poly));
		new->coeff=p->coeff;
		new->expo=p->expo;
		new->link=NULL;
		if(rhead==NULL){
			rhead=new;
			r=new;
		}
		else{
			r->link=new;
			r=r->link;
		}
		p=p->link;
	}
	while(q!=NULL){
		struct poly *new=(struct poly*)malloc(sizeof(struct poly));
		new->coeff=q->coeff;
		new->expo=q->expo;
		new->link=NULL;
		if(rhead==NULL){
			rhead=new;
			r=new;
		}
		else{
			r->link=new;
			r=r->link;
		}
		q=q->link;
	}
	return *rhead;
}
void readpoly(int n, struct poly **head){

	for(int i=0;i<n;i++){
		struct poly *new=(struct poly*)malloc(sizeof(struct poly));
		printf("Enter coeff and expo= ");
		scanf("%d %d",&new->coeff,&new->expo);
		new->link=NULL;
		
		if(*head==NULL){
			*head=new;
		}
		else{
			struct poly *ptr=*head;
			while(ptr->link!=NULL)
				ptr=ptr->link;
			ptr->link=new;
		}
	}
}
void display(struct poly **head){
	if(head==NULL){
		printf("EMPTY LIST FOUND\n");
	}
	else{
		struct poly *ptr=*head;
		while(ptr!=NULL){
			printf("%d x X^%d\t",ptr->coeff,ptr->expo);
			if(ptr->link!=NULL){
				printf("+\t");
			}
			ptr=ptr->link;
			
		}
	printf("\n");
	}
}

int main(){
	printf("Enter the no of terms for A and B respectively = ");
	int n,m;
	scanf("%d %d",&n,&m);
	printf("A---\n");
	readpoly(n,&phead);
	display(&phead);
	printf("B---\n");
	readpoly(m,&qhead);
	display(&qhead);
	printf("Sum = ");
	AddPoly(&phead,&qhead);
	display(&rhead);
	return 0;
}
		
