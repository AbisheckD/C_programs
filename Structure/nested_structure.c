#include<stdio.h>

struct st1{
    int x;
    struct st2{
        int y;
    }x2;
}x1 = {1,(2)};

int main()
{

    // struct st1 x1 = {1,(2)};
    printf("Size of x1 = %d\n",sizeof(x1));
    printf("value of x = %d\n",x1.x);
    printf("addrress of x1 = %d\n",&x1);  /* Both address of x1 and x1.x are same */
    printf("address of x = %d\n",&x1.x);  
    printf("Size of x2 = %d\n",sizeof(x1.x2));
    printf("value of y = %d\n",x1.x2.y);
    printf("address of x2 = %d\n",&x1.x2);  /* Both address of x1.x2 and x1.x2.y are same */
    printf("address of y = %d\n",&x1.x2.y);
    return 0;
}

/* OUTPUT */
/*
Size of x1 = 8
value of x = 2
addrress of x1 = 0x7ffcdfa96c48
address of x = 0x7ffcdfa96c48
Size of x2 = 4
value of y = 4
address of x2 = 0x7ffcdfa96c4c
address of y = 0x7ffcdfa96c4c
*/
