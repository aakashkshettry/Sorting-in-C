#include<stdio.h>
int main()
{
	//Bubble Sort 
	int a[10],round,n,i,j,temp;
	printf("How many numbers do you want to sort?? ");
	scanf("%d",&n);
	for (i=0;i<n;i++)		//initializing loop for input of the numbers							
	{
		printf("a[%d]=",i);	
		scanf("%d",&a[i]);		
		printf("\n");
	}	
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<n;i++)									
	{
		printf("a[%d]=",i);	
		printf("%d",a[i]);		
		printf("\n");
	}		
}
