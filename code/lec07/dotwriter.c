#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void dowa(int signal) {
  write( 1, "WOOF\n", 5);
}

int main() {
  signal( SIGINT, dowa);
  printf("My pid is %d\n", getpid() );
  int i = 60;
  while(--i) { 
    write(1, ".",1);
    sleep(1);
    if( i == 55) {
      kill( getpid(), SIGINT); 
    }
  }
  write(1, "Done!",5);
  return 0;
}
