#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LENGTH 50

int main(int argc, char* argv[])
{
  char *input = argv[1];
  for (int i = 0; i < strlen(input); i++) {
    if (!isdigit(input[i])) {
        printf("#%d is not digit\n", i);
        return 0;
    }
  }
  return 0;
}
