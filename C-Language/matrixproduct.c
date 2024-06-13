#include<stdio.h>
int main()
{
	int a[5][5], b[5][5], s[5][5] ;
	int i , j, r1 ,c1, r2, c2, sum=0;
	end:
	printf("Enter the Rows of matrix A : ");
	scanf("%d", &r1);
	printf("Enter the Columns of matrix A : ");
	scanf("%d", &c1);
	printf("Enter matrix A :");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the Rows of matrix B : ");
	scanf("%d", &r2);
	printf("Enter the Columns of matrix B : ");
	scanf("%d", &c2);
	printf("Enter matrix A :");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	if(c1== r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(int k=0;k<c1;k++)
				{
					sum += a[i][k] * b[k][j];	
				}
				s[i][j] = sum;
				sum=0;
			}
		}
		printf("The sum of matrix A and matrix B is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf(" %d ", s[i][j]);
		}
		printf("\n");
	}
	}
		else
		{
			printf("Columns of A should be equal to Rows of B\nPlease try again\n");
			goto end;
		}
	return 0;
}