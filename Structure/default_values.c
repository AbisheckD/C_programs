#include<stdio.h>

struct emp{
    int empid;
    char name[30];
    float salary;
};

int main()
{
    struct emp e1={100,"Name1",25000},e2={101,"Name2",30000};
    printf("Employer 1 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",e1.empid,e1.name,e1.salary);
    printf("Employer 2 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",e2.empid,e2.name,e2.salary);
    return 0;
}

/* output */
/*
Employer 1 details:
id = 100 : Name = Name1 : Salart = 25000.00
Employer 2 details:
id = 101 : Name = Name2 : Salart = 30000.00
*/
