#include<stdio.h>

int main()
{
	int i,j,n,k,t;
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
			printf("%d\n",arr[i]);
			k=arr[i];
			t=j;
		}
	}
	i++;
}while(k!=arr[t]);
    printf("%d is the first element that repeats\n index of the first repeating element %d ",k,i-1);
    return 0;
}