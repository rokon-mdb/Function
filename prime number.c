//prime or not
#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1 && n>=0)
    return 0;
    else
    {
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    k=prime(n);
    if(k==1)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}
