/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1,m2,sum;
  float average;

  printf("Enter two marks :");
  scanf("%d %d",&m1,&m2);

  sum = m1 + m2;

  average = sum / 2;

  printf("Average marks  = %.1f",average);

  
  return 0;
}

