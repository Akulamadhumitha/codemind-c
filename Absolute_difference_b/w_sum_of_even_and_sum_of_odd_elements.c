#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum_even=0,sum_odd;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
    printf("%d",abs(sum_even-sum_odd));
}