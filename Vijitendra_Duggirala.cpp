#include<stdio.h>


int search(int a[], int n , int x)
{

	int beg, end, mid;
	beg=0;end = n-1;
	while (beg<=end)
	{	
		mid = (beg+end)/2;
		if(a[mid]==x)
			return mid+1;	
		else if( x > a[mid])
			beg=mid+1;
		else 
			end=mid-1;
	}
	return -1;
}

void Sort(  int A[] , int n)
{
	int i, j, k;
	for(i=0;i<n;i++)
		for(j=0;j<(n-i-1);j++)
			if(A[j]>A[j+1])
			{	
				k=A[j];
				A[j]=A[j+1];
				A[j+1]=k;
			}	
}


void main()
{
	int n,beg, end,mid, x, i;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array: \n\n");
	for(i=0;i<n;i++)	
		scanf("%d", &a[i]);
	printf("\nEnter the element to be searched: ");
	scanf("%d" , &x);
	Sort(a,n);
	int t=search(a, n, x);
	if(t!=-1)
		printf("The element is present");
	else
		printf("The element is not present");
}
			
	
		
