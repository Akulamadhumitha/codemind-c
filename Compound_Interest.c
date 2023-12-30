#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci,amt;
    scanf("%f%f%f",&p,&r,&t);
    amt=(p*(pow(1+(r/100),t)));
    ci=amt-p;
    printf("%.2f",ci);
    
}