#include<stdio.h>

int main()
{
    unsigned int i = 0x00000001;
    char *c = (char *)&i;
    
    if(*c == 1)
    {
        printf("It is Little Endian\n");
    }
    else
    {
        printf("It is Big Endian\n");
    }
    return 0;
}

/* OUTPUT */
/* 
STDOUT OUTPUT
It is Little Endian
*/
