#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_id;
    char name[50];
    struct Date doj;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", emp.name);

    printf("Enter Date of Joining (dd mm yyyy): ");
    scanf("%d %d %d", &emp.doj.day, &emp.doj.month, &emp.doj.year);

    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Employee Name: %s\n", emp.name);
    printf("Date of Joining: %02d-%02d-%04d\n",
           emp.doj.day,
           emp.doj.month,
           emp.doj.year);

    return 0;
}
