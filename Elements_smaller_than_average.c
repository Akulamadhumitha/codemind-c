#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int count=0;
    int a=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            count++;
        }
    }
    printf("%d",count);
    
    
    
    
}