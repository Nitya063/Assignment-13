#include<stdio.h>
int factorial(int,int);
int main()
{
    int n,fact=1;
    printf("Enter the no.\n");
    scanf("%d",&n);
    printf("Factorial of %d = %d.",n,factorial(n,fact));
    return 0;
}
int factorial(int n,int fact)
{
    if(n==0)
        return fact;
    fact=fact*n;
    return factorial(n-1,fact);
}
