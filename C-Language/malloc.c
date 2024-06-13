#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n;
	printf("enter size of array ");
	scanf("%d",&n);
	ptr= (int*)malloc(n*sizeof(int));
	for(int i=0; i<n ; i++)
	{
		printf("enter value no. %d : ", i);
		scanf("%d",&ptr[i]);
	}
		for(int i=0; i<n ; i++)
	{
		printf("as the value no. %d you have entered %d : \n",i , ptr[i]);

	}
	return 0;
}