#include<stdio.h>
int power(int,int,int);
int main()
{
    int n,pow,r=1;
    printf("Enter the base and exponent.\n");
    scanf("%d%d",&n,&pow);
    printf("%d raised to power %d = %d.",n,pow,power(n,pow,r));
    return 0;
}
int power(int n,int pow,int r)
{
    if(pow==0)
        return r;
    r=r*n;
    return power(n,pow-1,r);
}


