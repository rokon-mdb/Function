//sum 1 t0 n

#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    int k;
    k=n + sum(n-1);
    return k;
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    k=sum(n);
    printf("%d\n",k);
    return 0;
}
