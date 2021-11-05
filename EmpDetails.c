// program to calculate and display the Gross_salary and Net_salary of
// employees working in a retail medical shop if their Basic, DA, TA, other
// allowances and deductions are given.
#include<stdio.h>
#include<conio.h>
struct employee
{
     int basic;
     int da;
     int ta;
     int hra;
     int pf;
     int gross_salary;
     int net_salary;
};
void main()
{
      struct employee e[100];
      int n,i;
      printf("Enter total number of employees\n");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
           printf("Enter the basic salary of Employee %d\n",i+1);
           scanf("%d",&e[i].basic);
           e[i].da=(e[i].basic*10)/100;
           e[i].ta=(e[i].basic*12)/100;
           e[i].hra=(e[i].basic*15)/100;
           e[i].gross_salary=e[i].basic+e[i].da+e[i].ta+e[i].hra;
           e[i].pf=(e[i].gross_salary*10)/100;
           e[i].net_salary=e[i].gross_salary-e[i].pf;
      }
      printf("Details of Employees are as follows:\n");
      printf("Employee\t Basic\t DA\t TA\t HRA\t PF\t Gross_Salary\t Net_Salary\n");
      for(i=0;i<n;i++)
      {
          printf("Employee%d\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n",i+1,e[i].basic,e[i].da,e[i].ta,e[i].hra,e[i].pf,e[i].gross_salary,e[i].net_salary);
      }

}
