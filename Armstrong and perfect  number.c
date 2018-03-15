//find Armstrong number or not
//and find perfect number or not
#include<stdio.h>
#include<math.h>
int Armstrong_number(int n)
{
    int k,m,y;
    if(n<=0)
        return 0;

    k=pow((n%10),3)+Armstrong_number(n/10);

    return k;
}
int Perfect_number(int n)
{
    if(n<=5)
        return 0;
    int i,k=0;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
            k=k+i;
    }
    return k;

}

int main()
{
    int n,i,t,k;
    printf("Input any number: ");
    scanf("%d",&n);
    k=Armstrong_number(n);
    i=Perfect_number(n);
    if(k==n)
        printf("The %d is an Armstrong number.\n",n);
    else
        printf("The %d is not an Armstrong number.\n",n);
    if(i==n)
        printf("The %d is a Perfect number.\n",n);
    else
        printf("The %d is not a Perfect number.\n",n);
    return 0;
}
