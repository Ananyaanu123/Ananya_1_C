#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[100];
    int n,i;
    float sum=0;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    printf("Enter the details of %d employees:\n",n);
    for(i=0; i<n; i++); {
    printf("Enter the name for employee %d:",i+1);
        scanf("%s",&employees[i].name);
    printf("Enter the id for employee %d:",i+1);
        scanf("%s", &employees[i].id);
        printf("Enter the salary for employee %d:",i+1);
        scanf("%s",& employees[i].salary);
        sum += employees[i].salary;
    }
    float average_salary=sum/n;
    printf("Average salary of employees :%.2f\n", average_salary);
    return 0;
}
