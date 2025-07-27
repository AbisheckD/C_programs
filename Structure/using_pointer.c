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
    struct emp *p;
    p = &e1;
    printf("Employer 1 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",p->empid,p->name,p->salary);
    p = &e2;
    printf("Enter the employee 2 details: id, name, salary\n");
    scanf("%d %s %f",&p->empid,p->name,&p->salary);
    printf("Employer 2 details:\n");
    printf("id = %d : Name = %s : Salart = %.2f\n",p->empid,p->name,p->salary);
    return 0;
}

/* OUTPUT */
/*
Enter the employee 1 details: id, name, salary
101
Name123
50000
Enter the employee 2 details: id, name, salary
1001
Name456
55000
Employer 1 details:
id = 101 : Name = Name123 : Salart = 50000.00
Enter the employee 2 details: id, name, salary
1005
Name789
56000
Employer 2 details:
id = 1005 : Name = Name789 : Salart = 56000.00

*/
