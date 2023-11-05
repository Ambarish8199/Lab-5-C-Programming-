#include<stdio.h>

int main()
{
	int i,j,k,n,t;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
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
			printf("%d\n",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		k=1;
		t=i;
		printf("%d\n",arr[t]);
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			k++;
			i=j;
		}
		}
		printf("%d Is Frequency\n",k);
	}
	return 0;	
}