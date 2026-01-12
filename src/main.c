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
    fgets(s,sizeof(s),stdin);
    s[strcspn(s, "\n")] = 0;
    if(strcmp(s,"exit")==0)
      break;
    // printf("%d\n",strlen(s));
    if(s[0]=='e' && s[1]=='c' && s[2]=='h' && s[3]=='o')
    {
      int i=4;
      while(i<strlen(s) && s[i]==' ')
        i++;
      while(i<strlen(s))
        printf("%c",s[i++]);
      printf("\n");
    }
    else 
    printf("%s: command not found\n", s);
  }
  return 0;
}
