//largest among two
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    if (num1 > num2)
    {
        printf("\n%d is largest",num1);
    }
    else
    {
        printf("\n%d is largest",num2);
    }
    return 0;
}
