#include <stdio.h>
#include <string.h>

int contains_at(char*);


int main(int argc, char** argv) {
  int result = contains_at(NULL);
  if(result) printf("Contains an @\n");
  else printf("No @ found\n");
  return 0;
}

int contains_at(char* ptr) {
  // for (int i =0; i < strlen(ptr); i++) {
//     if (ptr[i] == '@') return 1; // *(ptr +i) or i[ptr]
//   }
   char c;
  while ((c=*ptr ++)) if(c == '@') return 1;
  return 0;
}
