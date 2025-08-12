/* Problem - 5 in Hackerrank named "POINTER TO C" */

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int c = *a, d = *b; 
    *a = c + d;
    *b = (c > d) ? (c - d) : (d - c);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/* OUTPUT */
/*
INPUT GIVEN 
4
5

EXPECTED OUTPUT
9
1

MY OUTPUT
9
1  
*/
