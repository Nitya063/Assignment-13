#include<stdio.h>
int digisum(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the number.\n");
    scanf("%d",&n);
    printf("Sum of digits of %d = %d.",n,digisum(n,sum));
    return 0;
}
int digisum(int n,int sum)
{
    if(n==0)
        return sum;
    sum=sum+(n%10);
    return digisum(n/10,sum);
}

