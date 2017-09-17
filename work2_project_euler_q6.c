//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <stdio.h>
#include <stdlib.h>


int main() {
  int sum_square = 0;
  int square_sum = 0;

  int counter = 1;
  int difference; 

  for (counter = 1; counter <= 100; counter += 1) {
    sum_square += (counter * counter);

    square_sum += counter;
 
  }

  square_sum *= square_sum;

  difference = square_sum - sum_square;

  printf("The difference is: %d\n", difference);

  return difference;

  
    
} 
    
