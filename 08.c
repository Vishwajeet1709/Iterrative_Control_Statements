#include<stdio.h>
int main()
{
    //printing square of first N natural numbers
    int n,i;
    printf("Enter a number to print square of n natural number :");
    scanf("%d",&n);
    printf("\nSquare of first %d natural numbers.\n",n);
    for(i=1;i<=n;i++)
        printf(" %d,",i*i);
    return 0;
}

