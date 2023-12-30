#include<stdio.h>

int main ()
{
	int i,j,n,sum,k;
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
			for(k=i+2;k<n;k++)
			{
			if( (arr[i]+arr[j] + arr[k] == sum) && (i!=j) && (j!=k) && (k!=i) )
			{
				printf("true ");
				printf("%d , %d , %d\n",arr[i],arr[j],arr[k]);
			}
		}
		}
	}
	return 0;
}