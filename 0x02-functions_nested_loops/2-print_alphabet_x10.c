#include <stdio.h>
#include "main.h"

int main(void){
  signed int count = 0;

  while(count < 10){
    print_alphabet_x10();
    count++;
  }
  return 0;
}
