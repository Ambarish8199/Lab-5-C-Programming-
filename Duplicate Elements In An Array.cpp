#include<stdio.h>

int main ()
{
	int t,i,n,j,k;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
    do
    {
    	for(j=i+1;j<n;j++)
    	{
    	if(arr[i]==arr[j])
    	{
    		printf("%d",arr[i]);
		    k=arr[j];
			}
			if(arr[j+1]==k)
		    {
		    	break;
		}
	}
		i++;
	}while(arr[i]!=k);
	return 0;
}