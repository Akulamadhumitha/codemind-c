#include<stdio.h>
int sum_of_all_nums(int a,int b,int x,int y)
{
    int i,sum=0;
    for(i=a;i<=b;i++)
    
    {
        if(i%x==0 && i%y!=0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    printf("%d",sum_of_all_nums(a,b,x,y));
}