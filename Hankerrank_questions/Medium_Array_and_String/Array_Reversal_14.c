/* Problem number 14 in Hackerrank named " Array Reversal" in Medium under Array and Strings */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i = 0, j = num-1; i < j ; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

/* OUTPUT
STDIN INPUT
6
16 13 7 2 1 12

EXPECTED OUTPUT
12 1 2 7 13 16
*/
