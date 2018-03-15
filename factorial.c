//find factorial of n
#include<stdio.h>
int factorial(int n)
{
    int y;
    if(n<=0)
        return 1;
    y=n*factorial(n-1);
    return y;
}
int main()
{
    int n,k,m;
    scanf("%d",&n);
    k=factorial(n);
    printf("%d\n",k);
    return 0;
}
