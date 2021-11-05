//program to check whether the given number is Armstrong number or not

#include<stdio.h>
void main()
{
     int n,r,sum=0,temp;
     printf("Enter the number");
     scanf("%d",&n);
     temp=n;
     while(n>0)
     {
           r=n%10;
           sum=sum+(r*r*r);
           n=n/10;
     }
     if(temp==sum)
          printf("Entered number %d is an armstrong number",temp);
     else
          printf("Entered number %d is not an armstrong number",temp);
     
}