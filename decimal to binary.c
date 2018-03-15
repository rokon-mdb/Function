#include<stdio.h>
void binary_function(int n)
{
    int i,k,j;
    int a[100000];
    if(n==0)
    {
        printf("%d\n",n);
        return 0;
    }
    i=0;
    while(n!=0)
    {
        a[i]=n%2;
        k=i;
        i++;
        n=n/2;
    }
    for(j=k; j>=0; j--)
        printf("%d",a[j]);
    printf("\n");

}
int main()
{
    int i,k,n;
    scanf("%d",&n);
    binary_function(n);

    //printf("%d\n",k);
    return 0;
}
