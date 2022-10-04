#include<stdio.h>
int main()
{
    //printing N odd natural numbers in revers order
    int n,i;
    printf("Enter a number to print n odd natural number in reverse order :");
    scanf("%d",&n);
    printf("%d odd natural numbers in revers order.\n",n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2 != 0)
            printf(" %d,",i);
    }
    return 0;
}

