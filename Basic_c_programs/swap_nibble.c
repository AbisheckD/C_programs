#include<stdio.h>

#define SWAP_NIBBLE(i) ((i & 0x0F)<<4)|((i & 0xF0)>>4)
int main()
{
    unsigned char i;
    printf("Enter the number:\n");
    scanf("%hhu",&i);
    
    unsigned char x = SWAP_NIBBLE(i);
    printf("%u\n",x);  // unsigned interger value
    printf("%x\n",x);  // In hexa decimal value
    return 0;
}

/* OUTPUT */
/* 
INPUT
12

OUTPUT
192
c0
*/
