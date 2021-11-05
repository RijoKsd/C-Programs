//program to count number of vowels, consonants and spaces in a line of
text
#include<stdio.h>
#include<string.h>
void main()
{
      char line[150];
      int vowels=0,consonant=0,space=0;
      int i;
     printf("Enter a line of string:");
     gets(line);
     for(i=0;line[i]!='\0';i++)
     {
          if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
           line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
           line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
           line[i] == 'U')
          {
               vowels++;
          }
          else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
          {
               consonant++;
           }
           else if (line[i] == ' ')
           {
               space++;
           }
      }
     printf("Vowels: %d\n", vowels);
     printf("Consonants: %d\n", consonant);
     printf("White spaces: %d\n", space);
     
}