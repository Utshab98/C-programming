// Multiplication table of any number
#include<stdio.h>
int main()
{
    int n,i,m=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("\tMultiplication Table of %d is :\n\n",n);
    for(i=1;i<=10;i++)
    {
        m = n * i;
        printf("\t\t%d * %d = %d\n",n,i,m);

    }
    return 0;
}
