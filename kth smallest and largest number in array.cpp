#include<stdio.h>
int main()
{
	int i,j,n,k,l;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])	
		{
			int t;
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
		}
	}
		for(l=0;l<n;l++)
		{
			printf("%d",arr[l]);
		}
		scanf("%d",&k);
		printf("kth smallest number is %d\n",arr[k-1]);
		printf("kth largest number is %d",arr[n-k]);
        return 0;
}