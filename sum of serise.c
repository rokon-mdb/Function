//find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5....n using the function

#include<stdio.h>
int factorial(int n)
{
    if(n==1||n==0)
        return 1;
    int k;
    k=n*factorial(n-1);
    return k;
}

double divides(int n)
{
    if(n==1)
        return n;
    double k;
    k=factorial(n)/n;
    return k;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    double k;
    k=0;
    for(i=1; i<=n; i++)
    {
        k=k+divides(i);
    }
    printf("%.2lf\n",k);

    return 0;
}
