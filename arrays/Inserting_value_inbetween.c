#include<stdio.h>
int main()
{
    int size,i,pos,value;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the position to be added:\n");
    scanf("%d",&pos);
    int arr[size];
    printf("Enter the value:\n");
    scanf("%d",&value);
    if(pos <= 0 || pos > size+1)
    {
        printf("Invalid entry...!\n");
    }
    else
    {
        printf("Enter the elements:\n");
        for(i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=size-1; i>=pos-1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = value;
        size++;
    }
    printf("After insertion:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

/* OUTPUT*/
/*
Enter the size of array:
5
Enter the position to be added:
3
Enter the value:
2
Enter the elements:
0
1
3
4
5
After insertion:
0 1 2 3 4 5 
*/
