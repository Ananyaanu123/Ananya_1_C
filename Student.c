#include<stdio.h>
struct student {
    char name[50];
    int age,gender, department; 
    float college;
};
int main() {
    struct student s1;
    printf("enter name:");
    scanf("%s",s1.name);
    printf("enter age:");
    scanf("%d",&s1.age);
    printf("enter gender:");
    scanf("%d",&s1.gender);
    printf("enter department:");
    scanf("%d",&s1.department);
    printf("enter college:");
    scanf("%f",&s1.college);
    printf("\nStudent Details\n");
    printf("Name:%f\nage:%d\ngender:%d\ndepartment:%d\ncollege:%.2f\n",s1.name,s1.age,s1.gender,s1.department,s1.college);
    printf("Ananya ");
    return 0;
}
