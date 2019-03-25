#include<stdio.h>
void quickSort(int array[],int left,int right);
int partition(int array[],int left,int right);
int main()
{
	int i;
	int a[]={2,1,7,6,8,5,3,4};
	quickSort(a,0,7);
	printf("The sorted lists is \n");
	for(i=0;i<=7;i++)
	{
		printf("%d\n",a[i]);
	}	
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int *a,int left,int right)
{
	
	int temp,pivot,pindex,i,start,end;
	start=left;end=right;
	pivot=a[end];
	pindex=start;
	for(i=start;i<=end-1;i++)
	{
		if (a[i]<=pivot)
		{
			swap(&a[i],&a[pindex]);	
			pindex++;
		}
	}
		swap(&a[pindex],&a[end]);
		return pindex;	
}
void quickSort(int *a,int left,int right)
{	
	if(left<right)
	{
		int pos;
		pos=partition(a,left,right);
		quickSort(a,left,pos-1);
		quickSort(a,pos+1,right);		
	}
}
