 //program to check whether the given number is odd or even
#include<stdio.h>
      void main()
{
     int num;
     printf("Enter a number: ");
     scanf("%d", &num);
     if(num%2==0)
      printf("%d is even.", num);
     else
      printf("%d is odd.", num);
}