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
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				k++;
				t = arr[j];
				arr[j] = arr[i+1];
				arr[i+1] = t;
				
			}
		}
	}
	printf("%d",arr[2*k]);
	return 0;
}