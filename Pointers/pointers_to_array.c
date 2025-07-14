#include<stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int (*ptr)[5]=&arr;
    
    printf("%d %d\n", p, ptr);  
    printf("%d %d\n", *p, *ptr);
    
    printf("%d %d\n", *(p+2), *(*ptr+2));
    printf("%d %d\n", ptr, *(ptr+2));
    
    printf("%d %d\n", p[1], (*ptr)[1]);
}

/* OUTPUT
1341437856 1341437856
10 1341437856
30 30
1341437856 1341437896
20 20   */
