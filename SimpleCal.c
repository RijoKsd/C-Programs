//program to accept two numbers and perform various arithmetic
//operations (+, -, *, /) based on the symbol entered.

#include<stdio.h>
void main()
{
     char operator;
     int num1,num2;
     printf("Enter an operator (+, -, *,/): ");
     scanf("%c", &operator);
     printf("Enter two numbers\n");
     scanf("%d %d",&num1,&num2);
     switch (operator)
     {
          case '+':
               printf("Sum of %d and %d is %d",num1,num2,num1+num2);
                break;
          case '-':
               printf("Difference of %d and %d is %d",num1,num2,num1-num2);
               break;
          case '*':
               printf("Product of %d and %d is%d",num1,num2,num1*num2);
               break;
          case '/':
               printf("Division of %d and %d is%d",num1,num2,num1/num2);
               break;
          default:
               printf("Error! operator is not correct");
     }
 
}