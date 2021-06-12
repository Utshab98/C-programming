// Adding float and integer numbers
#include<stdio.h>

int main()
{
    int a;
    float b,sum;
    printf("Enter the integer :\n");
    scanf("%d",&a);
    printf("Enter the floating no :\n");
    scanf("%f",&b);
    sum = a + b;
    printf("\nThe sum of the integer and the float  = %f\n",sum);
    return 0;
}
