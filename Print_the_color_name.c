#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("%s",(c=='V')?"Violet":(c=='I')?"Indigo":(c=='B')?"Blue":(c=='G')?"Green":(c=='Y')?"Yellow":(c=='O')?"Orange":(c=='R')?"Red":"-1");
}