#include <unistd.h>
#include "writeStr.h"

int writeStr(char *strPtr) 
{

  int count = 0;

  while (*strPtr != '\0')
  {
    write(STDOUT_FILENO, strPtr, 1);
    strPtr++;
    count++;
  }  

  return count;
}


