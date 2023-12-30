#include<stdio.h>

int main ()
{
	int i,j,n,sum;
	scanf("%d",&n);
	scanf("%d",&sum);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if( arr[i]+arr[j] == sum )
			{
				printf("true ");
				printf("%d , %d\n",arr[i],arr[j]);
			}
		}
	}
	return 0;
}