//find perfect number between two int by function

#include<stdio.h>

int perfect(int n)
{
    if(n<=1)
        return 0;
    int k=0,i;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
            k=k+i;
    }
    if(k==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n,m,i,k;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d",&n);
    printf("Input highest search limit of perfect numbers : ");
    scanf("%d",&m);
    printf("\nThe perfect numbers between %d to %d are :\n",n,m);
    for(i=n; i<=m; i++)
    {
        k=perfect(i);
        if(k==1)
            printf(" %d ",i);
    }
    printf("\n");
    return 0;
}
