#include<stdio.h>

int main(void)
{
    int n,i=0,j=0;
     do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    float array[n];
    float swap=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    sum=array[0]+array[i-1];
    printf("%.2f",sum);
    return 0;
}