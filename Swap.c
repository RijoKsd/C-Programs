//program to swap two numbers using pointers
#include<stdio.h>
void swap(int *x, int *y);
void main()
{
     int a,b;
     printf("Enter two numbers to swap");
     scanf("%d\n%d",&a,&b);
     printf("\nBefore swapping a=%d\n",a);
     printf("Before swapping b=%d\n",b);
     swap(&a, &b);
     printf("After Swapping a= %d\n",a);
     printf("After Swapping b= %d\n",b);
 
}
void swap(int *x, int *y)
{
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
}