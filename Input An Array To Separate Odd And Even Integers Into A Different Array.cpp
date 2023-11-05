#include<stdio.h>

int main ()
{
	int i,j=0,n,k=0,t=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{   
		    j++;
		}
	}
	int arr1[j],arr2[n-j];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{   
			arr1[t]=arr[i];
			printf("%d",arr1[t]);
			t++;
		}
		}
		printf(" Are Even Integers In An Array\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			arr2[k]=arr[i];
			printf("%d",arr2[k]);
			k++;
		}
		}
			printf(" Are Odd Integers In An Array");	
	return 0;	
    }
    