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
  
    // scanf("%99s",&s);
    fgets(s,99,stdin);
    if(strcmp(s,"exit")==0)
      break;
    if(strlen(s)>=4)
    {
      if(s[0]=='e' && s[1]=='c' && s[2]=='h' && s[3]=='o')
      {
        int i=4;
        while(i<strlen(s) && s[i]==' ') i++;
        for(;i<strlen(s);i++)
          printf("%c",s[i]);
        // break;
      }
    }
    else printf("%s: command not found\n", s);
  }
  return 0;
}
