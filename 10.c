#include<stdio.h>
int main()
{
    //program to print table of any given number
    int n,i;
    printf("Enter a number to print  :");
    scanf("%d",&n);
    printf("Printing table of %d :\n",n);
    for(i=1;i<=10;i++)
        printf("5 X %d = %d \n",i,i*n);
    return 0;
}

