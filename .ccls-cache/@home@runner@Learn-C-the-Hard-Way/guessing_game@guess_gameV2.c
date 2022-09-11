#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"

//creating a function to handle the transferring the datatype of the 
//guessing input from string to short
short the_shortning(char num[], int len) {
  fgets(num, len, stdin);
  return (short)strtol(num, 0, 0);
  
};

void change_newLine(char arr[], int num) {{
  fgets (arr, num, stdin);

  short end_pos = strcspn(arr, "\n");
  arr[end_pos] = '\0';
}}




int main() {
  // print to the terminal similar to printf but include new line at the end
  puts("what is your name");

  /*
  creating an array
  another to call an array char name[100]
  variable with array type needs an explicit size or be initialized
  so this char *name[]; is wrong since i haven't given it a value
  */
  char name[100];
  change_newLine(name, 100);
  printf("Hello my name is %s !\n", name);


  /*
    ew want to ask the user to guess the number that we are thinking of between 1- and 10we are going to use rand to generate a random number 
  srand(unsigned int seed) seeds the random number generator used by the function rand.
  */
  srand(time(0));
  int my_num = rand() % 10 * 1;
  printf("the number i am guessing is %d \n", my_num);

  short count = 5;
  short attempts = 0;
  char num_guess_num[4];
  short new_guess_num;
  do{
    puts("guess the number, you have 5 tries;)");
    new_guess_num = the_shortning(num_guess_num, 4);
    count--;
    attempts++;
  }while(count > 0 || new_guess_num == my_num);

  if(num_guess_num == my_num) {
    printf("you win");
  }

  printf("you lost");

  return 0;
}