#include <stdio.h>

//gonna learn about pointers



int main(void) {
  //Create two arrays: ages storing some int data, and names storing an array of strings.
  int ages[] = {12, 25, 33, 55, 19};
  char *names[] = {
  "jespson", "jodhua", "luth", "luther", "Billy"
  };

  for(int i = 0; i < names.length; i++;) {
    for(int j = 0; i < ages.length; j++;) {
      printf("%d is about %d years old \n", i , j);
    }
  }
}