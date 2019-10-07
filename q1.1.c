#include<stdio.h>

int main(void)
{
    
    int n,i;
    float sum=0;
    do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    float array[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
        sum+=array[i];
    }
    printf("%.2f",sum/n);
    return 0;
}