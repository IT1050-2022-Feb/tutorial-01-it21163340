/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int a, int b){
  
  int min;

  if (a < b){
    min = a;
  }
  else{
    min = b;
  }

  return min;
}

int maximum(int a, int b){
  
  int max;

  if (a > b){
    max = a;
  }
  else{
    max = b;
  }

  return max;
}

int multiply(int a, int b){
  
  return a*b;

}
