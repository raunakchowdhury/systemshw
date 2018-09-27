#include <stdio.h>
#include <string.h>

int main(){
  char* arg = "string";
  //char* arg_pointer = arg;
  printf("Printing string arg: %s\n", arg);
  //printf("Printing string length: %d\n", length(*arg));
  char new_arg[] = "rightf"; //you need n+1 length!
  strcpy(new_arg, arg);
  printf("Printing string new_arg: %s arg: %s\n", new_arg, arg);
  return 0;
}
