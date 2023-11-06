#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[2*n];
	for(i=0;i<2*n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<2*n;i++)
	{
		printf("%d\n",a[i]);
		
	}
		int t;
	for (i=0;i<n;i++)
	{
		t=a[2*i];
		a[2*i]=a[2*i +1];
		a[2*i + 1]=t;
	}
	for(i=0;i<2*n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}
