#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char s[100];
  printf("$ ");
  
  scanf("%99s",&s);
  // s=argv;
  // TODO: Uncomment the code below to pass the first stage
  printf("%s: command not found\n", s);
  return 0;
}
