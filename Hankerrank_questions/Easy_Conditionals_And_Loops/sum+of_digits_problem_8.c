/* Porblem - 8 in Hackerrank named "Sum of Five Digit Numbers" */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    int i, sum = 0, r;
    
    while(n>0)
    {
        r = n%10;
        n/=10;
        sum += r;
    }
    
    printf("%d\n",sum);
    
    return 0;
}

/* OUTPUT */
/*
STDIN INPUT
10564

EXPECTED OUTPUT
16

MY OUTPUT
16
*/
