/* problem - 13 in Hackkerrank named "!D array in C" under Medium Array and Strings concept */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int i, size, sum = 0;
    scanf("%d ",&size);
    
    int arr[size];
    for(i = 0; i < size; i++)
    {
        scanf("%d ",&arr[i]);
        sum += arr[i];
    }   
    printf("%d \n",sum);
    return 0;
}

/* OUTPUT
STDIN INPUT
6
16 13 7 2 1 12 

EXPECTED OUTPUT
51

MY OUTPUT
51
*/
