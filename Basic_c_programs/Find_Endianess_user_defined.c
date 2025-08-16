#include<stdio.h>

int main()
{
    unsigned int i;
    
    printf("Enter the number:\n");
    scanf("%u", &i);
    
    char *c = (char *)&i;
    
    if(*c == (i & 0xFF))
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
