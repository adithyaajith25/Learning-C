#include <stdio.h>
void enqueue(int,int);
void dequeue();
void display();

struct prQ{
	int item;
	int priority;
}A[12];
int front=-1,rear=-1,size;

int main(){
	int i,x,y;
	printf("Enter size of array-:");
	scanf("%d",&size);
	while(i!=-10){
		printf("Enter\n1-enqueue\n2-dequeue\n3-display\nAll other values-END-");
		scanf("%d",&i);
		switch(i){
			case 1:
				
				printf("Enter item and priority-");
				scanf("%d %d",&x,&y);
				enqueue(x,y);
				printf("Front-%d\nRear-%d\n\n",front,rear);
				break;
			case 2:
				dequeue();
				printf("Front-%d\nRear-%d\n\n",front,rear);
				break;
			case 3:
				display();
				printf("\nFront-%d\nRear-%d\n\n",front,rear);
				break;
			default: 
				printf("PROGRAM END\n");
				i=-10;
		}
	}
}

void enqueue(int item, int priority){
	if (front==0 && rear==size-1)
		printf("Queue is full\n");
	
	else if(front==-1 && rear==-1){
		front=0; rear=0;
		A[rear].item=item;
		A[rear].priority=priority;
	}
	else if(rear==size-1){
		int i=front;
		while(A[i].priority<=priority)
			i++; 
		for(int j=front;j<i;j++)
			A[j-1]=A[j];
			
		
		A[i-1].item=item;
		A[i-1].priority=priority;  
		front--;
	}
	else{
		
		int i=front;
		while(A[i].priority<priority && A[i].priority!=NULL)
			i++;
		for(int j=rear;j>=i;j--)
			A[j+1]=A[j];
		rear++;
		A[i].item=item;
		A[i].priority=priority;  
	}
}

void dequeue(){
	if (front==-1 && rear==-1)
		printf("Queue is empty\n");
	else if(rear==front){
		printf("Dequed item is %d\n",A[front].item);
		front=rear=-1;
	}
	else{
		printf("Dequed item is %d\n\n",A[front].item);
		front++;
	}
}

void display(){
	if (front==-1 && rear==-1)
		printf("Queue is empty");
	else{
		for(int i=front;i<=rear;i++)
			printf("\t%d",A[i].item);
	}
}
		
			       
