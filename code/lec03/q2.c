#include <stdio.h>
int main(int argc, char**argv) {
  
  char ** p = argv;
  while( *p) {
    //printf("%s\n",*p);
    puts( *      ++ p ); 

  }
  return 0;
}