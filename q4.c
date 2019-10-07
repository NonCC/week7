#include<stdio.h>
#include<math.h>

int main(void)
{
    int n,i,sum=0;
    do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    int array1[n];
    int array2[n];
    for(i=0;i<n;i++)
    {
        do
        {
        scanf("%d",&array1[i]);
        }
        while(array1[i]!=0 && array1[i]!=1);
    }
     int m=n;
    for(i=n-1;i>=0;i--)
    {
    printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=array1[i]*pow(2,i);
    }
    printf("\n%d",sum);
    return 0;
}