/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {

  float distance, price;

  printf("Input the distance travelled : ");
  scanf("%f", &distance);
  printf("\n");

  printf("The distance travelled is : %.f\n", distance);

  if (distance <= 30){
    price = distance*50;
  }  
  else{
    price = (30*50) + (distance - 30)*40;
  }

 printf("The amount to be paid is Rs. %.2f\n", price);
  
  return 0;
}