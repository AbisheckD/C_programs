#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp = 0, count = 0, remainder, sum = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    temp = n;
    while(n > 0)
    {
        n /= 10;
        count++;
    }
    n = temp;
    while(n > 0)
    {
        remainder = n % 10;
        n /= 10;
        sum += pow(remainder, count);
    }
    if(sum == temp)
    {
        printf("It is an armstrong number\n");
    }
    else
    {
        printf("It is not an armstrong number\n");
    }
    return 0;
}

/* OUTPUT */
/* 
INPUT 
370

OUTPUT
It is an armstrong number
*/
