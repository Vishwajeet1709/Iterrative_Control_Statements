#include<stdio.h>
int main()
{
    //printing Cube of first N natural numbers
    int n,i;
    printf("Enter a number to print Cube of n natural number :");
    scanf("%d",&n);
    printf("\nCube of first %d natural numbers.\n",n);
    for(i=1;i<=n;i++)
        printf(" %d,",i*i*i);
    return 0;
}


