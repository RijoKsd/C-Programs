//program to implement 5 string handling functions

#include<stdio.h>
#include<string.h>
void main()
{
     char s1[20],s2[20],s3[30];
     int length;
     printf("Enter first string\n");
     gets(s1);
     printf("Enter second string\n");
     gets(s2);
     length=strlen(s1);
     printf("Length of string1 is %d\n",length);
      length=strlen(s2);
     printf("Length of string2 is %d\n",length);
     if(strcmp(s1,s2)==0)
          printf("Two strings are equal\n");
     else
          printf("Two strings are not equal\n");
     strcpy(s3,s1);
     printf("Copied string = %s\n",s3);
     strcat(s1,s2);
     printf("After concatenation string 1 and string 2 = %s\n",s1);
     strrev(s2);
     printf("After reversing string 2=%s\n",s2);
 
}
