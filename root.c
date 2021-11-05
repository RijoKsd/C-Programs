// program to find the roots of a quadratic equation

#include<math.h>
#include<stdio.h>
void main()
{
     float a,b,c,d,r1,r2,real,imag;
     printf("Enter coefficients a, b and c: ");
     scanf("%f%f%f",&a,&b,&c);
     d=b*b-4*a*c;
     if(d>0)
     {
          r1=(-b+sqrt(d))/(2 * a);
          r2=(-b-sqrt(d))/(2 * a);
          printf("Roots are real and different\n");
          printf("Root1=%.2f\n",r1);
          printf("Root2=%.2f\n",r2);
     }
     else if(d==0)
     {
          r1=-b/(2*a);
          r2=-b/(2*a);
          printf("Roots are real and equal\n");
          printf("Root1= %.2f\n", r1);
          printf("Root2= %.2f\n", r2);
     }
     else
     {
          real=-b/(2*a);
          imag=sqrt(-d)/(2*a);
          printf("Roots are complex\n");
          printf("Root1 = %.2f+i%.2f\n",real, imag);
          printf("Root2 = %.2f-i%.2f\n",real, imag);
     }
     
}
 