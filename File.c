// program to read a line of text from the keyboard and write it to a file.

#include<stdio.h>
#include<stdio.h>
void main()
{
FILE *f1; 
char c;
f1=fopen("new.txt","w");
printf("Enter a line of text (Press * to exit)\n");
while((c=getchar())!=EOF)
{
     if(c=='*')
          exit(0);
     putc(c,f1);
}
fclose(f1);
printf("File copied successfull\n");
fclose(f1);
}