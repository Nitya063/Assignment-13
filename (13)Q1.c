#include<stdio.h>
int naturalsum(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    printf("Sum of %d natural numbers = %d.",n,naturalsum(n,sum));
    return 0;
}
int naturalsum(int n,int sum)
{
    if(n==0)
        return sum;
    sum=sum+n;
    return naturalsum(n-1,sum);
}
