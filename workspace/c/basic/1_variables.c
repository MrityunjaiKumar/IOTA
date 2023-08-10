// variables defination

// data_type variable_name=value;
#include <stdio.h>
#include <inttypes.h>
int y = 2; // global variable
void main()
{
  printf("sizeof char = %lu bytes\n", sizeof(char));
  printf("sizeof int = %lu bytes\n", sizeof(int));
  printf("sizeof long = %lu bytes\n", sizeof(long));
  printf("sizeof long long = %lu bytes\n", sizeof(long long));

  printf("sizeof int8_t = %lu bytes\n", sizeof(int8_t));

  int x = 1; // local variable
  printf("x value = %d \n", x);
  y = 3;    // modifcation global variable
  printf("y value = %d \n", y);
  x = 4;    // modifcation local variable
  printf("x value = %d \n", x);


  // static, const, auto , extern

  /**
   * 
   * ecifiers that you can use in ANSI C are as follows:
Specifier 	Used For
%c 	a single character
%s 	a string
%hi 	short (signed)
%hu 	short (unsigned)
%Lf 	long double
%n 	prints nothing
%d 	a decimal integer (assumes base 10)
%i 	a decimal integer (detects the base automatically)
%o 	an octal (base 8) integer
%x 	a hexadecimal (base 16) integer
%p 	an address (or pointer)
%f 	a floating point number for floats
%u 	int unsigned decimal
%e 	a floating point number in scientific notation
%E 	a floating point number in scientific notation
%% 	the % symbol
  */
}