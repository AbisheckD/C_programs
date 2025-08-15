/* Problem - 10 in Hackerrank named "Find the Nth Term" using recursion in Easy Functions */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int x;
  if(n == 1)
  {
    return a;
  }
  if(n == 2)
  {
    return b;
  }
  if(n == 3)
  {
    return c;
  }
  x = find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
  return x;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

/* OUTPUT */
/*
STDIN INPUT
5
1 2 3

EXPECTED OUTPUT
11

MY OUTPUT
11
*/
