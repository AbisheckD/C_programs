#include<stdio.h>

struct emp{
    int empid;
    char name[30];
    float salary;
};

int main()
{
    struct emp e1,e2;
    printf("Enter the employee 1 details: id, name, salary\n");
    scanf("%d %s %f",&e1.empid,e1.name,&e1.salary);
    printf("Enter the employee 2 details: id, name, salary\n");
    scanf("%d %s %f",&e2.empid,e2.name,&e2.salary);
    printf("Employer 1 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",e1.empid,e1.name,e1.salary);
    printf("Employer 2 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",e2.empid,e2.name,e2.salary);
    return 0;
}

/* OUTPUT */
/*
Enter the employee 1 details: id, name, salary
1001
Name11
35000
Enter the employee 2 details: id, name, salary
1002
Name12
36000
Employer 1 details:
id = 1001 : Name = Name11 : Salart = 35000.00
Employer 2 details:
id = 1002 : Name = Name12 : Salart = 36000.00
*/
