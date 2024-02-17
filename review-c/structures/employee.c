#include <stdio.h>

typedef struct employee
{
    char name[100];
    int  ID;
    int  salary;
} Employee;

void assignEmployeeData(Employee * employee);
void printEmployeeInfo(Employee * employee);

int main(){
    Employee employee1, employee2, employee3;
        assignEmployeeData(&employee1);
        assignEmployeeData(&employee2);
        assignEmployeeData(&employee3);

        printEmployeeInfo(&employee1);
        printEmployeeInfo(&employee2);
        printEmployeeInfo(&employee3);

    return 0;
}

void assignEmployeeData(Employee * employee){
    printf("Enter Employee Name: ");
    scanf("%s", employee->name);
    while(getchar() != '\n');

    printf("Enter Employee ID number: ");
    scanf("%d", &employee->ID);

    printf("Enter Employee Salary: ");
    scanf("%d", &employee->salary);
    printf("\n");
}

void printEmployeeInfo(Employee * employee){
    printf("Employee Name: %s\n", employee->name);
    printf("Employee Name: %d\n", employee->ID);
    printf("Employee Name: %d\n\n", employee->salary);
}

