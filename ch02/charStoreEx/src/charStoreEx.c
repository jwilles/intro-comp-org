#include <stdio.h>

int main(void)
{
  char *helloPtr = "Hello World.\n";

  printf("Address:  Contents:\n");
  
  while (*helloPtr != '\0')
  {
    printf("%p: 0x%02x\n", helloPtr, *helloPtr);
    helloPtr++;
  }

  printf("%p: 0x%02x\n", helloPtr, *helloPtr);

  return 0;
}
