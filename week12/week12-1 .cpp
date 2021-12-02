#include<stdio.h>
int a[10]={3,1,0,2,4,6,5,8,7,9};
int main()
{
    for(int i=0;i<10;i++) printf("%d ", a[i]);
    printf("開始之前\n");

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++) printf("%d ", a[i]);
    printf("最後結束\n");
}
