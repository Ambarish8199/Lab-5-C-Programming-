#include<stdio.h>

int main ()
{
	int t,i,n,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	j=0;
	do
	{
		t=arr[n-j-1];
	arr[n-j-1] = arr[j];
	arr[j]=t;
	j++;
	}while(j<(n+1)/2);
	for(j=0;j<n;j++)
	{
	printf("%d",arr[j]);
	}
	return 0;
	}
	