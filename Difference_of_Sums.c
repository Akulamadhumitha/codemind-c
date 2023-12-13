#include<stdio.h>
#include<math.h>
int square_of_nat_nums(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return pow(sum,2);
}
int sum_of_squares(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++){
		sum+=i*i;
	}
	return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",abs(square_of_nat_nums(n)-sum_of_squares(n)));
}