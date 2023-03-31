/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  // delaring the variables
  float num1, num2, sum, avg;

  // getting inputs from the keyboard
  printf("Enter the number 1: ");
  scanf("%d", &num1);
  printf("Enter the number 2: ");
  scanf("%d", &num2);

  //calculate the avg
  sum = num1 + num2;
  avg = sum / 2;

  //printing the output
  printf("Average is %f: ", avg);

  return 0;
}//end of the main funcion
