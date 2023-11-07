#include<stdio.h>
#include<stdlib.h>
void enqueue(),dequeue(),peek(),display(),menu();
int queue[50],n,front=-1,rear=-1,choice,item;
int main()
{
	printf("Enter the size of the queue:");
	scanf("%d",&n);
	
	menu();
}
void menu()
{
	printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:enqueue();
			break;
		case 2:dequeue();
			break;
		case 3:peek();
			break;
		case 4:display();
			break;
		case 5:exit(1);
	}
}
void enqueue()
{
	if(rear!=n-1)
	{
		printf("Enter the element to be inserted:");
		scanf("%d",&item);
		front=0;
		rear=rear+1;
		queue[rear]=item;
		printf("Element inserted successfully\n");
	}
	else{
		printf("Queue is full,can't insert data\n");
	}
	menu();
}
void dequeue()
{
	if(front==-1 || front>rear){
		printf("Queue is empty\n");
	}
	else{
		item=queue[front];
		printf("Deleted:\t%d",item);
		if(front==rear){
			front=rear=-1;
		}
		else{
			front=front+1;
		}
	}
	menu();
}
void display()
{
	int i=0;
	if(rear==-1){
		printf("Queue is empty\n");
	}
	else{
		printf("Elements are:");
		for(i=front;i<=rear;i++){
			printf("%d\t",queue[i]);
		}
	}
	menu();
}
void peek()
{
	if(front==-1){
		printf("No element in queue\n");
	}
	else{
		printf("Peek element:%d",queue[front]);
	}
	menu();
}
		
