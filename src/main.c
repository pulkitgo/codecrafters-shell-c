#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char s[100];
  while(1)
  {
    printf("$ ");
  
    scanf("%99s",&s);
    // printf("%d",strlen(s));
    // s[strlen(s)]='\0';
    if(strcmp(s,"exit")==0)
      break;
    printf("%s: command not found\n", s);
  }
  return 0;
}
