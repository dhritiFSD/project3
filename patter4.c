#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
