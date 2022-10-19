#include <stdio.h>
 int factorial(int number){
     if (number==1 || number==0)
     {
         return 1;
     }
     else{
         return (number * factorial (number-1));
     }
 }
 
 int main()
 {
     int a;
     printf("Enter a Number To Find The Factorial: ");
     scanf("%d", &a);
     printf("The Factorial of %d is %d", a, factorial(a));
     return 0;

 }
