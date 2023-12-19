#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
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
    
    int ae=sum/n;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(ae==arr[i]){
			flag=1;
			break;
		}
	}
	if(flag==0) printf("False");
	else printf("True");
}