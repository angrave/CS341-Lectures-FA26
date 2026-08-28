
#include <stdio.h>

int main(int argc, char**argv) {

  fprintf(stderr, "CS 341: "); // write(2,..)
  fprintf(stdout, "System ");
  fflush(stdout);
  fprintf(stderr, "Programming "); // write(2,..)
  fprintf(stdout,"\n"); // write(1, "System \n")
  return 0;
}
// a.out > hello.txt 2> error.log
// or just a.out for a surprise...
