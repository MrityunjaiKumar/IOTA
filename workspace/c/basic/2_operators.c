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
int set_bit(int val, int _bit);
int flip_bit(int val, int _bit);
int clear_bit(int val, int _bit);
void main()
{
    printf("get_bit ==> %d\n", get_bit(6, 2));
    printf("set_bit ==> %d\n", set_bit(6, 2));
    printf("flip_bit ==> %d\n", flip_bit(6, 3));
    printf("clear_bit ==> %d\n", clear_bit(6, 2));
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
    return 0;
}
/**
 * Set the nth bit
 */
int set_bit(int val, int _bit)
{
    return val | BIT(_bit);
}
/***
 * flip BIt
 */
int flip_bit(int val, int _bit)
{
    val ^= BIT(_bit);
    return val;
}

int clear_bit(int val, int _bit)
{
    val &= ~BIT(_bit);
    return val;
}