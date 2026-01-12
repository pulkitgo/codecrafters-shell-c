#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// typedef struct {
//   char *s;
//   __uint8_t s_siz;
//   bool  val_s;
// }buffer;

// buffer create_buffer()
// {
//   buffer buff;
//   buff.s=calloc(128,sizeof(char));
//   buff.s_siz=0;
//   buff.val_s=false;
//   return buff;
// }

// __uint8_t taking_input(buffer *buff)
// {
//   fgets(buff->s,128,stdin);
//   buff->s_siz=strlen(buff->s)-1;
//   buff->s[strcspn(buff->s,"\n")]=0;
//   return buff->s_siz;
// }

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
    char s1[100];
    strcpy(s1, s);
    s1[strcspn(s1,"\n")]=0;
    char *command=strtok(s1," "); 
    if(strcmp(s,"exit")==0)
      break;
    else if(strcmp(command,"echo")==0)
    {
      int i=4;
      // printf("%s\n",s);
      while(i<strlen(s) && s[i]==' ')i++;
      while(i<strlen(s))printf("%c",s[i++]);
      printf("\n");
    }
    else if(strcmp(command,"type")==0)
    {
      int j=0,c=0;
      char ss[100];
      for(int i=0;i<strlen(s);i++)
      {
        if(c==1)
        {
          ss[j++]=s[i];
        }
        if(s[i]==' ')c=1;
      }
      ss[strcspn(ss,"\n")]=0;
      if(strcmp(ss,"echo")==0 || strcmp(ss,"exit")==0)
        printf("%s is a shell builtin\n");
      else  
        printf("%s: not found\n");
    }
    else
    printf("%s: command not found\n", s);
  }
  return 0;
}
