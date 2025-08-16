#include<stdio.h>

int main()
{
    int a = 0, b = 1, c = 0, i, n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("%d ",a);
    for(i = 0; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d ",c);
    }
    return 0;
}

/* OUTPUT */
/*
STDIN INPUT
20

MY OUTPUT
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946
*/
