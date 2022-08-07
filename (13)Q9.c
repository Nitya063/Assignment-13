#include<stdio.h>
int digicount(int,int);
int main()
{
    int n,cnt=0;
    printf("Enter the number.\n");
    scanf("%d",&n);
    printf("No. of digits in %d = %d.",n,digicount(n,cnt));
    return 0;
}
int digicount(int n,int cnt)
{
    if(n==0)
        return cnt;
    cnt++;
    return digicount(n/10,cnt);
}


