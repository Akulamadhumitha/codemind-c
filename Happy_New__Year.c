#include<stdio.h>
int main(){
    int h,m;
    scanf("%d%d",&h,&m);
    int rem_hrs=24-h;
    int result;
    result=(rem_hrs*60)-m;
    printf("%d",result);
}