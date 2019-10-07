#include<stdio.h>

int main(void)
{
    int n,i,sum=0,a,b,o=0;
    do
    {
        scanf("%d",&n);
    }
    while(n<=0);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(a!=array[i])
        {
         o++;  
        }
    }
    if(o==n)
    {
        printf("not found");
    }
    else
    {
    for(i=0;i<n;i++)
    {
        if(a==array[i])
        {
           array[i]=b; 
        }
        printf("%d ",array[i]);
    }
    }
    return 0;
}