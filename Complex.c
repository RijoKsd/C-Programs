//program to add two complex numbers using structure
#include<stdio.h>
struct complex
{
     float real;
     float img;
};
void main()
{
     struct complex cnum1,cnum2,sum;
     printf("Enter real and imaginary part of first complex number:\n");
     scanf("%f%f",&cnum1.real,&cnum1.img);
     printf("Enter real and imaginary part of second complex number:\n");
     scanf("%f%f",&cnum2.real,&cnum2.img);
     printf("First complex number =%.2f+i%.2f\n",cnum1.real,cnum1.img);
     printf("Second complex number =%.2f+i%.2f\n",cnum2.real,cnum2.img);
     sum.real = cnum1.real + cnum2.real;
     sum.img = cnum1.img + cnum2.img;
     printf("Sum of complex numbers = %.2f + i %.2f", sum.real, sum.img);

}