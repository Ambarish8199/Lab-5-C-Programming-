#include<stdio.h>

int main()
{
	int t,s,N,i,j,n;
	scanf("%d",&n);
	s = (n*(n+1))/2 ;
	printf("%d\n",s);
	int arr[n] ;
	for(i=0;i<n-1;i++)
	{
       scanf("%d",&arr[i]);
	}
    t=0;
	for(j=0;j<n-1;j++)
	{
		t = t + arr[j];
	}
	printf("%d\n",t);
	printf("%d",s-t);
	return 0;
}

