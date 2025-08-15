#include<stdio.h>

int main()
{
    int i,j,n;
    
    printf("Enter the range as number:\n");
    scanf("%d",&n);
    for(i = 2; i < n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

/* OUTPUT */
/* 
INPUT GIVEN
100

MY OUTPUT
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/
