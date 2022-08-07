#include<stdio.h>
int squaresum(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    printf("Sum of squares of %d natural numbers = %d.",n,squaresum(n,sum));
    return 0;
}
int squaresum(int n,int sum)
{
    if(n==0)
        return sum;
    sum=sum+(n*n);
    return squaresum(n-1,sum);
}

