#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t x = 0x12345678; // -> Unsigned integers exactly 32 bits. 

    unsigned char *byte = (unsigned char *)&x; // -> byte allows me to examine the memory occupied by x, one byte at a time.

    printf("Value of x: 0x%08X\n", x);

    printf("Byte at lowest address:  0x%02X\n", byte[0]);
    printf("Next byte:               0x%02X\n", byte[1]);
    printf("Next byte:               0x%02X\n", byte[2]);
    printf("Byte at highest address: 0x%02X\n", byte[3]);

    return 0;
}