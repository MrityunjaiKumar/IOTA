// variables defination

// data_type variable_name=value;
#include <stdio.h>
#include <inttypes.h>

void main()
{
  printf("sizeof char = %lu bytes\n", sizeof(char));
  printf("sizeof int = %lu bytes\n", sizeof(int));
  printf("sizeof long = %lu bytes\n", sizeof(long));
  printf("sizeof long long = %lu bytes\n", sizeof(long long));

  printf("sizeof int8_t = %lu bytes\n", sizeof(int8_t));

  int x = 1;
  int8_t x2 = 1;
  printf("x value = %d bytes\n", x);
}