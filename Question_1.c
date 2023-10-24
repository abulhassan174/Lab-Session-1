#include <stdio.h>

int employeeID;
float totalHours;
float amount;

int main() {

    printf("Enter employee's ID: ");
    scanf("%d", &employeeID);

    printf("Enter total worked hours of employee in a month: ");
    scanf("%f", &totalHours);

    printf("Enter amount of a employee received per hour: ");
    scanf("%f", &amount);

    printf("Employee ID: %d\n", employeeID);
    printf("Salary: %.2f", amount * totalHours);


}

int employeeID;
