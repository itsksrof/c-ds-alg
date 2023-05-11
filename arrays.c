#include <stdio.h>
#include <stdlib.h>

void find_every_apple() {
  char prefilled_twod_char_array[10][10] = {
    {"apple"},
    {"orange"},
    {"banana"},
    {"date"},
    {"apple"},
    {"mango"},
    {"pineapple"},
    {"apple"},
    {"coconut"},
    {"apple"},
  };

  int steps;
  int found;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; i < 10; j++) {
      steps++;
      char str[6] = "apple";

      if (prefilled_twod_char_array[i][j] == *str) {
        found += 1;
      }
    }
  }

  printf("took %d steps to find %d apple(s)\n", steps, found);
  return;
}

int main() {
  find_every_apple();
  return 0;
}