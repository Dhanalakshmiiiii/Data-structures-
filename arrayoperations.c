#include<stdio.h>
#include<stdlib.h>
int search();
int display();
int sort();
int insert();
int delete();
void menu();
int choice,i,j=0,a[50],b[10],s;
void main(){
	printf("Enter the size of the array:");
	scanf("%d",&s);
	printf("Enter the elements of array:");
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	menu();
}
void menu(){
	printf("\n1.Insert");
	printf("\n2.Delete");
	printf("\n3.Sort");
	printf("\n4.Search");
	printf("\n5.Display");
	printf("\n6.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insert();
		break;
		case 2:delete();
		break;
		case 3:sort();
		break;
		case 4:search();
		break;
		case 5:display();
		break;
		case 6:exit(1);
	}
}
int search(){
	int ele,loc;
	printf("Enter element to be searched:");
	scanf("%d",&ele);
	printf("Element found at:");
	for(i=0;i<s;i++)
	{
	if(ele==a[i])
		printf("%d",i+1);
	}
	menu();
	return 0;
}
int sort(){
	printf("\nCurrent array:");
	for(i=0;i<s;i++)
		printf("\t%d\t",a[i]);

	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
	}
	printf("\nSorted array:\n");
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	menu();
	return 0;
}
int insert(){
	int loc,ele;
	printf("\nEnter the location:");
	scanf("%d",&loc);
	printf("Enter the element to be inserted:");
	scanf("%d",&ele);
	for(i=s;i>loc-1;i--)
		a[i]=a[i-1];
		a[loc-1]=ele;
	printf("\nElement inserted");
	printf("\nArray after insertion\n");
	s++;
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	menu();
	return 0;
}
int delete(){
	int loc;
	printf("\nEnter location:");
	scanf("%d",&loc);
	for(i=loc;i<s-1;i++)
		a[i]=a[i+1];
		s--;
	printf("\nElement deleted\n");
	printf("\nNew array after deletion\n");
	for(i=0;i<s;i++)
		printf("\t%d\t",a[i]);
	menu();
	return 0;
}

int display(){
	int i;
	if(s==0)
		printf("\nNo elements to display");
	else
		printf("Array elements are:");
		for(i=0;i<s;i++)
		{
			printf("%d\t",a[i]);
		}
	menu();
	return 0;
}
