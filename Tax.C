#include<stdio.h>
#include<conio.h>

int main()
{
  float tax;
  float income;
  printf("Enter your Income-\n");
  scanf("%f",&income);
  if(income>250000 && income < 500000)
  {
   tax = tax + 0.05*(income-250000);
  }
  if(income>=500000 && income<=100000)  
  {
   tax= tax + 0.2*(income-250000);
  }
  if(income>1000000)
  {
   tax = tax + 0.3*(income-250000);
  }
  printf("Tax Payable is %f\n",tax);
  

  return 0;
}

































