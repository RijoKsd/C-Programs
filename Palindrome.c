// program to check whether the given string is palindrome or not

#include<stdio.h>
#include<string.h>
void main()
{
     char s1[100], s2[100];
     printf("Enter the string :");
     gets(s1);
     strcpy(s2,s1);
     strrev(s2);
     if (strcmp(s1,s2) == 0)
          printf("The string is a palindrome\n");
     else
          printf("The string is not a palindrome\n");
 
}