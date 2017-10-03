#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");
  printf("Size of an int : %lu \n", sizeof(int));
  printf("Size of an int pointer : %lu \n", sizeof(int*));
  printf("Size of an long : %lu \n", sizeof(long));
  printf("Size of an double pointer : %lu \n", sizeof(double*));
  printf("Size of an pointer to a char pointer : %lu \n", sizeof(char**));

  return 0;
}
