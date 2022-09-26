#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "io_func.h"

typedef struct Ranking{
  char name[99];
  float score;
} Ranking;


Ranking high_scores[3];

//function to add scores
void add_score(char name[], float score) {
  //loop though scores to find the first score smaller than the new score 3
  for(int i = 0; i < sizeof(high_scores); i++){
    if(high_scores[i].score < score){
      //we are going to start at end of the array and get to the index where the new score is greater than the previous score and push it down
      for(int j = sizeof(high_scores) - 1; j > i; j--){
        high_scores[i] = high_scores[j -1];
      }
      strcpy(high_scores[i].name, name);
      high_scores[i].score = score;
      break;
    }
  }
  
}

//function to display scores
void display_high_scores(Ranking* high_scores) {
    puts("High scores:\n");

    Ranking* i = high_scores;
    int count = 1;

    while(i != NULL) {
        printf("%d: %s $%.2f\n", count++, i->name, i->score);
        i = i->next;
    }
}

int main() {
 while(1){
    // print to the terminal similar to printf but include new line at the end
  puts("what is your name, press on ENTER to quit");

  /*
  creating an array
  another to call an array char name[100]
  variable with array type needs an explicit size or be initialized
  so this char *name[]; is wrong since i haven't given it a value
  */
  char name[100];
  if(strlen(name) == 0){
    break;
  }
  change_newLine(name);
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
    new_guess_num = the_shortning(num_guess_num);
    if(new_guess_num > my_num){
      printf("guess is too high");
    }else if(new_guess_num < my_num){
      printf("guess is too low");
    };
    
    count--;
    attempts++;
  }while(count > 0 || new_guess_num == my_num);
  
  int score = abs(((attempts - 5) /5) * 100);
  char perct = '%';

  printf("your score is %d %c \n", score, perct);
  add_score(name, score);
  display_highest_scores();
 
 }
  return 0;
}