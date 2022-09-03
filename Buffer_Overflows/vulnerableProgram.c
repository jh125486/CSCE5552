#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[15];
  int pass = 0;
  
  printf("\n Enter the password: ");
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"  
  gets(buff);
  
  if (strcmp(buff, "verylongpassword")) {
    printf("\nWrong Password\n");
  } else {
    printf("\nCorrect Password\n");
    pass = 1;
  }

  if (pass) {
    // Give rights to user
    printf("\nRoot privileges given to the user\n");
  }

  return 0;
}
