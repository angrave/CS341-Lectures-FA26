#include <unistd.h>
#include <sys/wait.h>

#include <stdio.h>
#include <stdlib.h>

int main () {
  printf("Hello. My pid is %d\n", getpid());
  int abc = 456;
  // FLUSH ALL THE THINGS (especially seekable streams)
  fflush (stdio) 
  int result  = fork();
  if(result == -1) { /* TODO */ }
  if(result == 0) { abc = 234; puts("Child!"); *(int*)0 = 123;  exit(42); }
  // i'm the parent
  int status;
  printf("My abc is %d\n",abc);
  waitpid( result, & status, 0); 
  printf("My abc is %d\n",abc);
//  printf("status %d\n", status);
  if( WIFEXITED(status)) printf("Normal exit : %d\n",WEXITSTATUS(status));
  if( WIFSIGNALED(status)) printf("SIGNALLED exit : %d\n",WTERMSIG(status));

  return 0;
}