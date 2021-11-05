//program to print transpose of a given matrix
#include<stdio.h>
void transpose(int a[10][10],int b[10][10],int,int);
void main()
{
      int a[10][10],b[10][10],i,j,r,c;
      printf("Enter rows and columns: ");
      scanf("%d %d",&r,&c);
      printf("\nEnter matrix elements:\n");
     for(i=0; i<r;i++)
     {
          for(j=0; j<c;j++)
          {
               printf("Enter element a[%d,%d]:",i,j);
               scanf("%d", &a[i][j]);
           }
     }
     printf("\nEntered matrix: \n");
      for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
                printf("%d\t",a[i][j]);
          }
          printf("\n");
      }
     transpose(a,b,r,c);
      printf("\nTranspose of the matrix:\n");
      for(i=0;i<c;i++)
      {
          for(j=0;j<r;j++)
          {
               printf("%d\t",b[i][j]);
          }
           printf("\n");
      }
 
} 
void transpose(int a[10][10],int b[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
    b[j][i]=a[i][j];
    }
}
