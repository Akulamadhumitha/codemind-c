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
    int a=sum/n,number_elts=0;
    for(i=0;i<n;i++)
    {
    if(arr[i]>=a)
    {
        number_elts++;
    }
}
    printf("%d",number_elts);
}
