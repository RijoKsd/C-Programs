// Program to print largest among three numbers.

#include<stdio.h>
void main()
{
     int a,b,c,large;
     printf(" Enter three numbers\n");
     scanf("%d %d %d", &a, &b, &c);
     large=a>b?(a>c?a:c):(b>c?b:c);
     printf("Largest of three number is : %d",large);
    
}
