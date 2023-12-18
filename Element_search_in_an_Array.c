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
    int se,flag=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i]) {
            flag=1;
            break;
        }
    }
    if(flag==0) printf("False");
       else printf("True");
       
    }
    
