//program to convert decimal number to its binary 
equivalent. 
#include<stdio.h>
 void main()
{
     int a[10],n,i; 
     printf("Enter the decimal number to convert: ");
     
     scanf("%d",&n);
     for(i=0;n>0;i++)
     {
          a[i]=n%2;
          n=n/2;
     }
     printf("\nBinary of given number is:");
     for(i=i-1;i>=0;i--)
     {
          printf("%d",a[i]);
     }
} 