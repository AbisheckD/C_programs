/* problem - 12 in Hackerrank named "Printing pattern using loops" */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
    int i, j, k;
    
    for(i = 1; i <= 2*n-1; i++)
    {
        k=n;
        if(i <= n)
        {
            for(j = 1; j <= 2*n-1; j++)
            {
                printf("%d ",k);
                if(i > j)
                {
                    k = k - 1;
                }
                if((i + j) >= 2*n)
                {
                    k = k + 1;
                }
            }
            printf("\n");
        }
        else
        {
            if(i > n)
            {
                for(j = 1; j <= 2*n-1; j++)
                {
                    printf("%d ",k);
                    if((i + j) < 2*n)
                    {
                        k = k - 1;
                    }
                    if(i <= j)
                    {
                        k = k + 1;
                    }
                }
                printf("\n");
            }
        }
        
    }
    return 0;
}

/* OUTPUT
  STDIN INPUT
  2

  EXPECTED OUTPUT
  2 2 2
  2 1 2
  2 2 2

  MY OUTPUT
  2 2 2
  2 1 2
  2 2 2 */
/* 
