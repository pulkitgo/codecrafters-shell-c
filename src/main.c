#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char s[100];
  while(1)
  {
    printf("$ ");
  
    scanf("%99s",&s);
    if(s=="exit")
      break;
    printf("%s: command not found\n", s);
  }
  return 0;
}
