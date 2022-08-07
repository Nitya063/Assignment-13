#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
    int f=0,s=1,n;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    printf("%d\n%d\n",f,s);
    fibonacci(f,s,n-2);
    return 0;
}
void fibonacci(int f,int s,int n)
{
    int t=0;
    if(n==0)
       return;
    t=f+s;
    printf("%d\n",t);
    return fibonacci(s,t,n-1);
}
