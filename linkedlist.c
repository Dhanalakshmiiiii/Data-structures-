#include<stdio.h>
#include<stdlib.h>
void disp();
void insert_beg();
void insert_end();
void insert_btw();
void delete_beg();
void delete_end();
void delete_btw();
struct node *create();
struct node
{
	int data;
	struct node*link;
};
typedef struct node newnode;
newnode * start=NULL;
void main()
{
	int ch;
	printf("Singly linked list:");
	printf("\nMenu\n1.Insert at beginning\n2.Insert at end\n3.Insert in between\n4.Deletion at beginning\n5.Deletion at end\n6.Deletion at between\n7.Display\n8exit\n");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		 switch(ch)
		 {
		 	
		 	case 1:insert_beg();
		 		break;
		 	case 2:insert_end();
		 		break;
		 	case 3:insert_btw();
		 		break;
		 	case 4:delete_beg();
		 		break;
		 	case 5:delete_end();
		 		break;
		 	case 6:delete_btw();
		 		break;
		 	case 7:disp();
		 		break;
		 	case 8:exit(1);
		 }
	}
}
struct node *create()
{
	newnode *nptr=(newnode*)malloc(sizeof(newnode*));
	if(nptr==NULL)
	{
		printf("Memory overflow");
		return 0;
	}
	else
	return nptr;
}

void disp()
{
	newnode *ptr=start;
	printf("\nElements in the linked list are:");
	while(ptr!=NULL)
	{
	printf("%d\t",ptr->data);
	ptr=ptr->link;
	}
}
void insert_beg()
{
	int val;
	newnode *nptr;
	printf("Enter the element to be inserted:");
	scanf("%d",&val);
	nptr=create();
	nptr->data=val;
	if(start==NULL)
	{
		start=nptr;
		nptr->link=NULL;
		}
		else
		{
		nptr->link=start;
		start=nptr;
		}
}
void insert_end()
{
	int val;
	newnode *nptr=create(),*temp;
	printf("Enter the element to be inserted:");
	scanf("%d",&val);
	nptr->data=val;
	nptr->link=NULL;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
		temp->link=nptr;
}
void insert_btw()
{
	int pos,i,val;
	newnode *nptr=create(),*temp;
	printf("Enter the element :");
	scanf("%d",&val);
	printf("\n position to be inserted:");
	scanf("%d",&pos);
	nptr->data=val;
	nptr->link=NULL;
	temp=start;
	if(pos==1)
	{
		nptr->link=start;
		start=nptr;
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
		nptr->link=temp->link;
		temp->link=nptr;
	}
}
void delete_beg()
{
	newnode *temp;
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}
}
void delete_end()
{ 
	newnode *temp,*prev;
	temp=start;
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
	free(temp);
	
}
void delete_btw()
{
	newnode *temp,*pre;
	int pos,i;
	printf("Enter the position:");
	scanf("%d",&pos);
	temp=start;
	if(pos==1)
		start=start->link;
	else
	for(i=1;i<pos;i++)
	{
		pre=temp;
		temp=temp->link;
		pre->link=temp->link;
	}
	
}

