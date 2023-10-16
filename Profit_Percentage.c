#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float res=(Y-X)*100.0/X;
    printf("%.2f",res);
}