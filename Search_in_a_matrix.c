#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int se,found=0;
    scanf("%d",&se);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(se==mat[i][j])
            {
                found=1;
                break;
            }
        }
    }
    if(found==0) printf("%d",found);
    else printf("%d",found);
}