#include<stdio.h>
int main()
{
    //print n even natural numbers
    int n,i;
    printf("Enter a number to print n even natural number :");
    scanf("%d",&n);
    printf("%d even natural numbers.\n",n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2 == 0)
            printf(" %d,",i);
    }
    return 0;
}

