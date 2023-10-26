#include<stdio.h>
int main()
{
    int hf,sf,Sf;
    scanf("%d%d%d",&hf,&sf,&Sf);
    if(hf>50 && sf>60 && Sf>100)
    {
        printf("10");
    }
    else if(hf>50 && sf>60 && Sf<100)
    {
        printf("9");
    }
    else if(hf<50 && sf>60 && Sf>100)
    {
        printf("8");
    }
    else if(hf>50 && sf<60 && Sf>100)
    {
        printf("7");
    }
    else if(hf>50 || sf>60 || Sf>100)
    {
        printf("6");
    }
    else
{
    printf("5");
}
    
}