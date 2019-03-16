#include<stdio.h>
int arr[20];       // array to be sorted
int main()
{
  int n,i;
  printf("Enter the size of array\n");  // input the size of the array
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);				//input of the size of the array
  
  split(arr,0,n-1);  					// splitting the array
  printf("Sorted array:");  			// printing sorted array
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  return 0;
} 

void split(int arr[],int p,int r)
{
  int q;
  if(p<r)
  {
    q=(p+r)/2;
   // Splitting the arrays
    split(arr,p,q);
    split(arr,q+1,r);
   // Combine
    merge(arr,p,q,r);
  } 
}

void merge(int arr[],int p,int q,int r)
{
	
    int arr1[10],arr2[10],temp[10];  // Two temporary arrays to hold the two arrays to be merged
  int n1,n2,i,j,k;
  n1=q-p+1;
  n2=r-q;
	/*copying the lists of the array "arr" into array "arr1" and "arr2"*/
  for(i=0;i<n1;i++)
    arr1[i]=arr[p+i];				
  for(j=0;j<n2;j++)
    arr2[j]=arr[q+1+j];				

  arr1[i]=9999;  					// To mark the end of each temporary array
  arr2[j]=9999;
  
  
  i=0;j=0;
  				/*process of combining two sorted arrays starts*/
  for(k=p;k<=r;k++)  
  {
    if(arr1[i]<=arr2[j])
    {
      arr[k]=arr1[i];
      i=i+1;
  }
    else
    {
      arr[k]=arr2[j];
      j++;
 }
}
}
