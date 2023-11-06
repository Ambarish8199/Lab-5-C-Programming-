#include<stdio.h>

int main()
{
	int i,j,n,a[n],max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	/*let us assume a[0] to be max*/
    max = a[0];
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>max)
	{
		max = a[i+1];
	   }
	}
		printf("%d\n",max);
	/*let us assume a[0] to be min*/
	min = a[0];
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<min)
		{
			min = a[i+1];
		}
	}
	printf("%d",min);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	

