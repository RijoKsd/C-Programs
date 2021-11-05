//program to print sum of n natural numbers
#include<stdio.h>
int sum(int);
void main()
{
     int n,result;
     printf("Enter a positive integer\n");
     scanf("%d",&n);
     result=sum(n);
     printf("Sum of %d natural numbers is %d",n,result);
}
int sum(int n)
{
     if(n==0)
     return(0);
     else
     return n+sum(n-1);
}