#include<stdio.h>
int main()
{
	int i,j;
	int n=5,m=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(j==1||i==1||i==3||(j==m&&i<3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	

}
