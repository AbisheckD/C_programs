#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(sizeof(int) * 5);
    
    /* To check memory allocation has happened */
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    
    /* assign value to ptr */
    for(int i=0; i<5; i++)
    {
        ptr[i] = i+1;
    }
    
    /* print the value */
    for(int i=0; i<5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
