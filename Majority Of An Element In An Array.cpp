#include<stdio.h>

int main()
{
	int i,j,n,k,t;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	i=0;
	k=0;
	do
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				k++;
				t=i;
			}
		}
		i++;
	}while(k<n/2);
		if(k<=n/2)
		{
			printf("No majority element");
		}
		else
		{
	printf("%d",arr[t]);
}
	return 0;
}