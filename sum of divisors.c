//sum of divisors
#include<stdio.h>
int sum(int n)
{
    if(n<=1)
    return n;
    int k,i,j;
    j=n;
    k=0;
    for(i=n; i>0; i--)
    {
        if(j%i==0)
            k=k+i;
    }
    return k;
}
int main()
{
    int n,k,m;
    scanf("%d",&n);
    k=sum(n);
    printf("%d\n",k);
    return 0;
}
