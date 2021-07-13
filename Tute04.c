/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum();
int maximum();
int multiply();

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
int minimum(){
  int no1,no2,minimum;
  minimum = (no1 > no2);
  printf("Minimum = %d\n",minimum);
  //minimum = (no1 > no2); //? no1 : no2;
  return minimum;

}
int maximum(){
  int no1,no2,maximum;
  maximum= (no1 > no2);
  printf("Maximum = %d\n",maximum);
  //maximum= (no1 > no2); //? no2 : no1;
  return maximum;

}
int multiply(){
  int no1,no2,multiply;
  multiply = no1*no2;
  printf("Multiply = %d\n",multiply);
  //multiply = no1*no2;
  return multiply;

}
