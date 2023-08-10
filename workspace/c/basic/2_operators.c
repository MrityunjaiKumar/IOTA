#include <stdio.h>
#include <inttypes.h>

/**
 * Types of operators
 * 1) Arithmetic operators  -->> +,-,/,*
 * 2) Relational opertors   -->> >,<,<=
 * 3) logical operators     -->> &&,||
 * 4) Bitwise operators     -->> |, &, ^, ~, <<, >>
 * 5) Assignment operators  --> =,+=,-= ...
 * 6) unery operators       ++,--
 * */

#define BIT(n) (1 << (n))

int get_bit(int val, int _bit);
void main()
{
    printf("%d", get_bit(6, 0));
}
/**
 * Get nth bit value
 **/
int get_bit(int val, int _bit)
{
    if ((val & BIT(_bit)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}
