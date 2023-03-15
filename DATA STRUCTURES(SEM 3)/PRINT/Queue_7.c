#include<stdio.h>
void enqueue(int);
void dequeue();
void display();
int A[10],size=10;front=-1,rear=-1;

int main(){
	int i=1,a;
	while(i!=0){
		printf("Enter:-\n1)Enqueue,\n2)Dequeue,\n3)Display,\n0)Exit: ");
		scanf("%d",&i);
		switch(i){
			case 0:
				break;
			case 1:
				printf("Enter element: ");
				scanf("%d",&a);
				enqueue(a);
				printf("***************\n\n");
				break;
			case 2:
				dequeue();
				printf("***************\n\n");
				break;
			case 3:
				display();
				printf("***************\n\n");
				break;
			default:
				printf("Invalid option.\n");
				printf("***************\n\n");
		
		}
	}
	
	return 0;
	
}

void enqueue(int item){
	if(rear==size-1){
		printf("Queue full.");
	}else if(rear==-1 && front==-1){
		rear=++front;
		A[rear]=item;
	}else{
		rear++;
		A[rear]=item;
	}
}

void dequeue(){
	if(front==-1 && rear==-1){
		printf("Queue empty\n");
	}else if(rear==front){
		printf("Removed element is %d.\n",A[front]);
		rear=-1;
		front=-1;
	}else{
		printf("Removed element is %d.\n",A[front]);
		front++;
	}
}

void display(){
	if(front==-1 && rear==-1){
		printf("Queue empty\n");
	}else{
		int j=0;
		for(j=front;j<=rear;j++)
			printf("%d\n",A[j]);
		
	}
	
}

	
	
	
	
	
	
	
	
		
