#include <stdio.h>
#include <linux/limits.h>
#include <unistd.h>


#define PATH_MAX 4096
//char *currentPath[PATH_MAX];
char *getcwd(char *buf, size_t size);

int main(int argc, char *argv[])
{
  int i = 0;
  char cwd[PATH_MAX];


  for(i = 1; i<argc; i++){
    printf("arg %d: %s\n", i, argv[i]);

  }

  if (argv[i] = "cd"){
    printf("strings? \n");
    //TODO: find a way to not use getcwd
    //TODO: Make your own version of the funciton or make a work around. 
    if(getcwd(cwd, sizeof(cwd)) != NULL){
      printf("Current Working dir: %s\n", cwd);
    }

  }

  return 0;


}
