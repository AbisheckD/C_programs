#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* creating values for 5 interger values */
    int *ptr = (int*)calloc(5,sizeof(int));
    
    /* condition to check memory allocation */
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");
    }
    
    /* assign values to ptr */
    for(int i=0; i<5; i++)
    {
        ptr[i]=i+1;
    }
    
    /* print values of ptr */
    for(int i=0; i<5; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    /* deallocationg ptr */
    free(ptr);
    printf("memory deallocated successful\n");
    return 0;
}


