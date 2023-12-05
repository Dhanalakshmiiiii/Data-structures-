#include<stdio.h>
int main()
{
	int a1[10],a2[10],a3[20],i,j,m,n,k;
	printf("Enter the size of first array:");
	scanf("%d",&m);
	printf("Enter the size of second array:");
	scanf("%d",&n);
	printf("Enter the elements of first sorted array:");
	for(i=0;i<m;i++){
		scanf("%d",&a1[i]);
	}
	printf("Enter the elements of second sorted array:");
	for(j=0;j<n;j++){
		scanf("%d",&a2[j]);
	}
	printf("The merged array is:");
	i=j=0;
	for(k=0;k<m+n;k++)
	{
		if(i<m && j<n)
		{
			if(a1[i]<a2[j])
			{
				a3[k]=a1[i];
				i++;
			}
			else
			{
				a3[k]=a2[j];
				j++;
			}
		}
		else if(i<m)
		{
			a3[k]=a1[i];
			i++;
		}
		else
		{
			a3[k]=a2[j];
			j++;
		}
	}
	for(k=0;k<m+n;k++)
	{
		printf("\t%d\t",a3[k]);
	}
	return 0;
}
	
