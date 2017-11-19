#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
  char aString[200];
  char *strPtr = aString;

  write(STDOUT_FILENO, "Enter a string: ", 16);
 
  read(STDIN_FILENO, strPtr, 1);
  while (*strPtr != '\n')
  {
    strPtr++;
    read(STDIN_FILENO, strPtr, 1);
  }
  *strPtr = '\0';


  printf("You entered:\n%s\n", aString);

//  write(STDOUT_FILENO, "You entered:\n", 14);
//  strPtr = aString;
//  do
//  {
//    write(STDOUT_FILENO, strPtr, 1);
//    strPtr++;
//  } while (*strPtr != '\n');
//  write(STDOUT_FILENO, strPtr, 1);

  return 0;
}
