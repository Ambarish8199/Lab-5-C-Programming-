#include<stdio.h>

int main()
{
	int i,n,m,k;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&k);
}
	for(i=0;i<m;i++)
	{
		arr[n+i] = k;
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}