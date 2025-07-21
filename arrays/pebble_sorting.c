#include<stdio.h>
int main()
{
    int i,j,size,t;
    printf("Enter the size of array elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    printf("After sorting:\n");
    for(i=0; i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
