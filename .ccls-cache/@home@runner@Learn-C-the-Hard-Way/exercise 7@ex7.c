//importing the stdio library
#include "stdio.h"


int main(void) {
  //playing around with the data types not going to be acexacgky like what on the book as i am not a beginner
  int age = 7;
  float height = 6.1;
  char name[] = "jespson";
  char letter = 'A';
  double notint = 12343.2352;

  printf("Hi my name is %s and I am %d. \n my height is %f, my last name starts with %c and this is random %f \n", name, age, height, letter, notint);
  
  return 0;
}