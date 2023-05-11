#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void find_every_apple() {
  char *prefilled_char_array[10] = {
    "apple",
    "orange",
    "banana",
    "date",
    "apple",
    "mango",
    "pineapple",
    "apple",
    "coconut",
    "apple",
  };

  int steps = 0;
  int found = 0;
  
  for (int i = 0; i < 10; i++) {
    steps++;
    char *str = "apple";

    if (prefilled_char_array[i] == str) {
      found += 1;
    }
  }

  printf("took %d steps to find %d apple(s)\n", steps, found);
  return;
}

int main() {
  find_every_apple();
  return 0;
}