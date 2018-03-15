//find maximum
#include<stdio.h>

int highest(int n)
{
    int i,k,a[n],max;
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}

int main()
{
    int i,k,n;
    scanf("%d",&n);
    k=highest(n);
    printf("%d\n",k);

    return 0;
}
