#include<stdio.h>

void second_largest_num(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d is the second largest number\n",arr[size-2]);
}

void second_smallest_num(int arr[], int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d is the second smallest number\n",arr[1]);
}

int main()
{
    int size, i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    second_largest_num(arr, size);
    second_smallest_num(arr, size);
    
    return 0;
}

/* OUTPUT
Enter the size of array
10
Enter the array elements:
11
56
78
90
33
45
56
32
49
89
89 is the second largest number
32 is the second smallest number  */
