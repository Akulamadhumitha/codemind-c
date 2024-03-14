#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char word[20];
    scanf("%s",word);
    int countz=0;
    int counto=0;
    for(int i=0;word[i]!=NULL;i++){
        if(word[i]=='z'){
            countz++;
        }
        else{
            counto++;
        }
    }
    if(countz*2==counto){
        printf("Yes");
    }
    else{
        printf("No");
    }
}