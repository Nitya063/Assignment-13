#include<stdio.h>
int evennaturalsum(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    printf("Sum of %d even natural numbers = %d.",n,evennaturalsum(n,sum));
    return 0;
}
int evennaturalsum(int n,int sum)
{
    if(n==0)
        return sum;
    sum=sum+(2*n);
    return evennaturalsum(n-1,sum);
}

