#include<stdio.h>
int gcd(int,int,int);
int main()
{
    int a,b,min;
    printf("Enter the no.s\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        min=b;
    else
        min=a;
    printf("HCF of %d and %d = %d.",a,b,gcd(a,b,min));
    return 0;
}
int gcd(int a,int b,int min)
{
  if(a%min==0 && b%min==0)
        return min;
  return gcd(a,b,min-1);
}
