#include <stdio.h>
#include <stdlib.h>



int main() {
  long counter = 2;
  long prime_factor = 600851475143;
  long divisor = 1; 


  while (prime_factor > divisor) {
    if (prime_factor % counter == 0) {
      divisor = counter; 
      prime_factor /= counter;
    }

    else {
      counter += 1;
    }
  }

  printf("%ld", divisor); 
  return divisor;
}




    
