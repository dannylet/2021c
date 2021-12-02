#include<stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<100;i++)
	{
		for(int k=i+1;k<100;k++)
		{
			if(a[i]>a[k])
			{
				int temp =a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		printf("%d\n",a[i]);
	}
}

