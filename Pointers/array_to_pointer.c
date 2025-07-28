#include<stdio.h>
int main()
{
    /* int a[3] = {10, 20, 30}; */
    
    int *int_arr[3], i, a[3];

    printf("Enter 3 values:\n");
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<3; i++)
    {
        int_arr[i] = &a[i];
    }
    
    for(i=0; i<3; i++)
    {
        printf("Array value of a[%d] = %d\n",i,a[i]);
    }
    return 0;
}

/* OUTPUT */
/*
Enter 3 values:
10
20
30
Array value of a[0] = 10
Array value of a[1] = 20
Array value of a[2] = 30
*/
