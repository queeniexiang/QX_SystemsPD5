#include<stdio.h>
#include<stdlib.h> 

int main() {
  int i = 5;
  float f = 10.7;
  char c = 97;
  char w = 'a';


  printf("i is %d \n", i);
  printf("f is %0.5f \n", f);
  printf("c is %c \n", c);
  printf("w is %d \n", w);

  //wrong formatting
  printf("i is %c \n", i);
  printf("f is %0.5f \n", f);
  printf("c is %f \n", c);
  printf("w is %0.5f \n", w);
  
}



