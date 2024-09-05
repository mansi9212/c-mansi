#include <stdio.h>

int main() {
    float base_salary, hra_percentage, da_percentage, ta_percentage;
    float hra, da, ta, gross_salary;

    printf("Enter base salary: ");
    scanf("%f", &base_salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percentage);

    printf("Enter DA percentage: ");
    scanf("%f", &da_percentage);

    printf("Enter TA percentage: ");
    scanf("%f", &ta_percentage);


       gross_salary = base_salary * (1 + hra_percentage / 100 + da_percentage / 100 + ta_percentage / 100);

         printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}


