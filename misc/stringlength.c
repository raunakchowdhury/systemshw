#include <stdio.h>

int length(char* s){
  int total = 0;
  char* temp_pointer = s;

  while( *temp_pointer ){
    total++;
    temp_pointer++;
  }
  return total;
}

int main(){
  char* str = "Bob0";
  printf("Printing length of Bob0: %d\n", length(str));
  char str2[] = "Bob0";
  printf("Printing length of Bob0: %d\n", length(str2));
  char str3[256] = "Bob0";
  printf("Printing length of Bob0: %d\n", length(str3));
  return 0;

}
