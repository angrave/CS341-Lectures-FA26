
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
//  char memory[256];
  char* memory = malloc(256); // heap
  sprintf( memory, "Hello class! %d", 42)
  
  char* ptr = NULL; 
  printf("My ptr lives here :%p\n", & ptr);
  
  // Use address-of my variable ...
  asprintf( & ptr , "%s/%s %d" , "123","456",78);

  printf("ptr is now %p and at that location: %s\n", ptr, ptr);
  free( ptr );
  ptr = NULL;
  
  return 0;
}
