#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        int a=x/y;
        int b=x%y;
        printf("%d",a+b);
    }
    else{
        printf("%d",x);
    }
}