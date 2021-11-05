// program to print Fibonacci series up to a given number.

#include<stdio.h>
void main()
{
      int n,i,f1,f2,nextterm;
      f1=0;
      f2=1;
      printf("Enter a number:\n");
      scanf("%d",&n);
      printf("Fibonacci Series upto %d\n",n);
      printf("%d\t %d\t",f1,f2);
      nextterm=f1+f2;
      while(nextterm<=n)
      {
           printf("%d\t",nextterm);
           f1=f2;
           f2=nextterm;
           nextterm=f1+f2;
      }
 
}