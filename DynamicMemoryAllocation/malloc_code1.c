#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(20);  // memory size of 20 bytes
    
    for(int i=0; i<5; i++)  /// allocate value to ptr
    {
        ptr[i] = i+1;
    }
    
    for(int i=0; i<5; i++)  // print prt values
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
