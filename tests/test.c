#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../color_shell.h"

#define LEN(a) sizeof(a)/sizeof(*a)

int main(int argc, char *argv[])
{
  void (*call[])(char *, ...) = {w_red, w_green, w_white, w_blue, w_purple, w_yellow, w_cyan};
  char *args[] = {"red", "green", "white", "blue", "purple", "yellow", "cyan"};
  uint32_t i = 0;

  for(i = 0; i<LEN(call); i++)
    call[i]("[+] This is %s\n", args[i]);

  puts("[*] Done");

  return 0;
}
