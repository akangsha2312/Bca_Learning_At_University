//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
  int i,n,pos,neg;
  printf("\nEnter the starting value:");
  scanf("%d",&i);
  printf("\nEnter the Ending value:");
  scanf("%d",&n);
  printf("\nNegative numbers:");
  while(i<=n)
  {
    if(i<0)
    {
       printf("\n%d",i);
       neg++;
    }
    i++;
  }
  printf("\nPositive numbers:");
  i=0;
  while(i<=n)
  {
    if(i>0)
    {
       printf("\n%d",i);
       pos++;
    }
    i++;
  }
  printf("\nTotal number of Positive :%d",pos);
  printf("\nTotal number of Negative :%d",neg);
  return 0;
}
