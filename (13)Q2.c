#include<stdio.h>
int oddnaturalsum(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    printf("Sum of %d odd natural numbers = %d.",n,oddnaturalsum(n,sum));
    return 0;
}
int oddnaturalsum(int n,int sum)
{
    if(n==0)
        return sum;
    sum=sum+((2*n)-1);
    return oddnaturalsum(n-1,sum);
}

