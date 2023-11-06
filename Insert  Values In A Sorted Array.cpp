#include<stdio.h>

int main()
{
	int i,j,n,m,k=0;
	scanf("%d",&n);
	int arr[n],t;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	int arr1[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<m;i++)
	{ 
	    for(j=0;j<n;j++)
	    {
	    	if(arr1[i]>arr[j])
	    	{
	    		k++;
			}
		}
    }
    printf("\n%d\n",k);
    n=n+m;
    for(i=0;i<n-k-m;i++)
    {
    	arr[n-i-1]=arr[n-i-2];
	}
	for(i=0;i<m;i++)
	{
		arr[k]=arr1[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}