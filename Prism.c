// rogram to print volume of a triangle using the concept macros with
//argument.
#include<stdio.h>
#define VOLUME(l,b,h) ((l*b*h)/2)
void main()
{
     float length,base,height,volume;
     printf("Enter length value of a triangle\n");
     scanf("%f",&length);
     printf("Enter base value of a triangle\n");
     scanf("%f",&base);
     printf("Enter height value of a triangle\n");
     scanf("%f",&height);
     volume=VOLUME(length,base,height);
     printf("Volume of trianglular prism is %.2f",volume);
}