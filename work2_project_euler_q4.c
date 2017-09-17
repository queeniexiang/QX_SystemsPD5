#include <stdio.h>
#include <stdlib.h>



int main() {

  long counter = 999;
  long current = 100;
  long temp, remainder, backwards,storage,comparison = 0;  
  while (counter > 99) {
    //printf("counter: %ld\n", counter); 
    for (current = 100; current < 1000; current++) {
      // printf("current: %ld\n", current);
      //printf("forloop"); 
      temp = current * counter;
      comparison = temp; 
      //printf("temp: %ld\n", temp); 

      backwards = 0;
      while (temp > 0) {
	remainder = temp % 10;
	backwards = (backwards * 10) + remainder; 
	temp = temp/10;
      }

      //printf("backwards: %ld\n", backwards); 

      if (comparison == backwards) {
	if (comparison > storage) {
	  storage = comparison;
	}
	//printf("storage: %ld\n", storage); 
      }
    }

    counter -= 1;
  }
  
       
  printf("Largest palindrome: %ld\n", storage);

  return storage; 
}

      
      
    
    
