#include<stdio.h>
#include<stdlib.h>

void using_3_variables(int, int);
void using_2_var_method_1(int, int);
void using_2_var_method_2(int, int);
void using_2_var_method_3(int, int);
void display_before(int, int);
void display_after(int, int);

int main(){
    int a, b, choice;
    printf("Enter the two numbers to be swapped:\n");
    scanf("%d%d",&a,&b);
    
    while(choice != 5)
    {
        printf("Enter the method:\n1.using 3 variables\n2.2 variable using +,-\n3.2 variable using *,/\n4.2 variable using ^\n5. To exit\n");
    
        scanf(" %d",&choice);
        
        switch(choice)
        {
            case 1: using_3_variables(a,b);
                      break;
            case 2: using_2_var_method_1(a,b);
                      break;
            case 3: using_2_var_method_2(a,b);
                      break;
            case 4: using_2_var_method_3(a,b);
                      break;
            case 5: exit(0);
            default: printf("Enter the proper number\n");
                     break;
        }
    }
    return 0;
}

void display_before(int a, int b)
{
    printf("Before swap: 1 = %d, 2 = %d\n",a,b);
}

void display_after(int a, int b)
{
    printf("After swap: 1 = %d, 2 = %d\n",a,b);
}

void using_3_variables(int a, int b)
{
    int temp;
    display_before(a, b);
    temp = a;
    a  = b;
    b = temp;
    display_after(a, b);
}

void using_2_var_method_1(int a, int b)
{
    display_before(a, b);
    a = a + b - (b = a);
    display_after(a, b);
}

void using_2_var_method_2(int a, int b)
{
    display_before(a, b);
    a = a * b / (b = a);
    display_after(a, b);
}

void using_2_var_method_3(int a, int b)
{
    display_before(a, b);
    a ^= b ^= a ^= b;
    display_after(a, b);
}
