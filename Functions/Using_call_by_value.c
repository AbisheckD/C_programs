#include<stdio.h>

void Swap_number(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a, &b);
    
    printf("Before swap: num1 = %d, num2 = %d\n",a,b);
    Swap_number(a, b);
    printf("After swap: num1 = %d, num2 = %d\n",a,b);
    return 0;
}

/*
OUTPUT
Enter the two numbers:
10
20
Before swap: num1 = 10, num2 = 20
After swap: num1 = 10, num2 = 20
  */
