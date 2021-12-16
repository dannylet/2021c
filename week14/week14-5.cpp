
#include<stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=c[i][j]+a[i][j]*b[i][j];
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
