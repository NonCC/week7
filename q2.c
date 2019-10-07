#include <stdio.h>

int main(void)
{
    int n,i,sum=0;
    do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    int array1[n],array2[n];
     for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&array2[i]);
    }
    for(i=0;i<n;i++)
    {
    sum+=array1[i]*array2[i];
    }
    printf("%d",sum);
    return 0;
}