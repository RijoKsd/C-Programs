// program to print multiplication table for the given number
#include<stdio.h>
 
void main()
{
 int num, i=1;
 printf("Enter any Number:");
 scanf("%d", &num);
 printf("Multiplication table of %d:\n",num);
 do
 {
     printf("%d x %d = %d\n", num, i, num*i);
     i++;
 } while(i<=10);
 
}