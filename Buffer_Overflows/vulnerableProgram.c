#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[15];
  int pass = 0;
  
  printf("\n Enter the password: ");
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"  
  gets(buff);
  
  if (strcmp(buff, "verylongpassword")) {
    printf("\n  Wrong Password \n");
  } else {
    printf("\n Correct Password \n");
    pass = 1;
  }

  if (pass) {
    // Give rights to user
    printf("\n Root privileges given to the user \n");
  }

  return 0;
}
