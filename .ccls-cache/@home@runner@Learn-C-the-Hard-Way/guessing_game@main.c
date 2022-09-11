#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"

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
  fgets (name, 100, stdin);

  short end_pos = strcspn(name, "\n");
  name[end_pos] = '\0';

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
  short num_guess_num;
  do{
    puts("guess the number, you have 5 tries;)");
    char guessed_num[4];
    fgets(guessed_num, 4, stdin);
    num_guess_num = (short)strtol(guessed_num, 0, 0);

    printf("the number you guessed is %d \n", num_guess_num);

    count--;
    attempts++;
  }while(count > 0 || num_guess_num == my_num);

  if(num_guess_num == my_num) {
    printf("you win");
  }

  printf("you lost");
}