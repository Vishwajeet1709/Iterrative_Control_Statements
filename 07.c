#include<stdio.h>
int main()
{
    //N even natural numbers in revers order
    int n,i;
    printf("Enter a number to print n Even natural number in reverse order :");
    scanf("%d",&n);
    printf("%d even natural numbers in revers order.\n",n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2 == 0)
            printf(" %d,",i);
    }
    return 0;
}

