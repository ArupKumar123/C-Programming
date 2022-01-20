#include<stdio.h>
int main()
{
	int arr1[100],t,i,j;
	int arr2[100]={0};
	printf("Enter t:\n");
	scanf("%d",&t);
	printf("\nEnter array elements:\n");
	for(i=0;i<t;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<t;i++)
	{
		arr2[arr1[i]]=arr2[i]+1;
	}
	for(i=0;i<100;i++)
	{
		if(arr2[i]>0)
		{
			printf("%d\n",i);
			arr2[i]--;
		}
	}
	return 0;
}
