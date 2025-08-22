#include<stdio.h>
#define SWAP_ENDIANESS(N) (((N & 0x000000FF)<<24) | ((N & 0x0000FF00)<<8) | ((N & 0x00FF0000)>>8) | ((N & 0xFF000000)>>24)) 

int main()
{
    unsigned int i = 12345678; /* Decimal 12345678 in hexadecimal is 0x00BC614E */
    printf("%u\n",SWAP_ENDIANESS(i)); /* %u --> Unsigned integer (decimal) */
    printf("%x\n",SWAP_ENDIANESS(i)); /* %x --> Integer in hexadecimal (lowercase) */
    return 0;
}

/* 
OUTPUT
1315027968
4e61bc00
  */
