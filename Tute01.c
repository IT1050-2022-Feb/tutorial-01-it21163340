/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2,total;
  float average;

  printf("Enter The Subect 1 : ");
  scanf("%d",&sub1);

  printf("Enter The Subect 2 : ");
  scanf("%d",&sub2);

  total = sub1+sub2;

  average = total/2;

  printf("Average = %.2f",average);


  
  return 0;
}

