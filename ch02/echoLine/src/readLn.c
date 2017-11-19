#include <unistd.h>
#include "readLn.h"

int readLn(char *strPtr, int maxStrLength) 
{

  int count = 0;
  maxStrLength--;
 
  read(STDIN_FILENO, strPtr, 1);
  while (*strPtr != '\n')
  {
    if (count < maxStrLength)
    { 
      count++;
      strPtr++;
    }
    read(STDIN_FILENO, strPtr, 1);
  }
  *strPtr = '\0';

  return count;
}


