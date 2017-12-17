#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int x;
  unsigned char aChar;

  printf("Enter an integer in hex: ");
  fflush(stdout);

  x = 0;
  read(STDIN_FILENO, &aChar, 1);
  while (aChar != '\n') {
    x = x << 4;
    if (aChar > '9') {
      aChar = aChar + 9;
    }
    aChar = aChar & 0x0f;
    x = x + (int)aChar;
    read(STDIN_FILENO, &aChar, 1);
  }

  printf(" You entered %#010x = %d (decimal)\n\n", x, x);

  return 0;

}
