#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char s[100];
  scanf("%s",&s);
  // s=argv;
  // TODO: Uncomment the code below to pass the first stage
  if(s=="$ ")
    printf("$ ");
  else 
    printf("command not found");
  return 0;
}
