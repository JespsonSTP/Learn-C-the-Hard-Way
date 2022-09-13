#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
#include "io_func.h"

//creating a function to handle the transferring the datatype of the 
//guessing input from string to short
short the_shortning(char num[]) {
  fgets(num, sizeof(num), stdin);
  return (short)strtol(num, 0, 0);
};

void change_newLine(char arr[]) {
  fgets (arr, sizeof(arr), stdin);
  short end_pos = strcspn(arr, "\n");
  arr[end_pos] = '\0';
}
