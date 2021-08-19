#include <stdio.h>
int main(void) { 
  // array of pointers
  
  
  char *cityPtr[4] = {
    "Chennai",
    "Kolkata",
    "Mumbai",
    "New Delhi"
  };
  int r, c; 
  // print cities
  for (r = 0; r < 4; r++) { // 0 1 2 3
    c = 0;
    while(*(cityPtr[r]+c) != '\0') { 
                                    
      printf("%c", *(cityPtr[r]+c));
      c++;
      
    }
    printf("\n");
  }
  return 0;
}
