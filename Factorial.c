// program to find the factorial of a given number.

#include<stdio.h>
int factorial(int);
void main()
{
     int n,result;
     printf("Enter a number\n");
     scanf("%d",&n);
     result=factorial(n);
     printf("Factorial of %d is %d",n,result);
}
int factorial(int n)
{
     int fact;
     if(n==1)
     return(1);
     else
     fact=n*factorial(n-1);
     return(fact);
}
