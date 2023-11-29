#include<stdio.h>
#include<math.h>
int main()
{
    float i,a,b,sum=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}