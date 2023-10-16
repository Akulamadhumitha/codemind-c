#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=199)
    {
        printf("%.2f",(a*1.20)+100);
    }
    else if(200<=a && a<400)
    {
        printf("%.2f",(a*1.50)+100);
    }
    else if(400<=a && a<600)
{
    printf("%.2f",(a*1.80)+0.15);
}
else
{
    printf("%.2f",(a*2.00)+0.15*a*2.00);
}
    
    
    
    
    
    
    
    
    
}