#include<stdio.h>
int main()
{
	int i,j,n,k,t=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		if(arr[j]==k)
		{
		t++;
		}
	}
	printf("%d",t);
	return 0;
}