#include <stdio.h>
#include <string.h>

struct student {
    char f_name[20];
    char l_name[20];
    float GPI;
};

struct employee {
    char f_name[20];
    char l_name[20];
    float salary;
};

void info_student(struct student s[], int n);
void info_employee(struct employee e[], int n);
void updatesalary(struct student s[], struct employee e[], int n);
void displaystudent(struct student s[], int n);
void displayemployee(struct employee e[], int n);

int main() {
    int n;
    printf("Enter number of students and employees: ");
    scanf("%d", &n);

    struct student s[n];
    struct employee e[n];

    info_student(s, n);
    info_employee(e, n);
    updatesalary(s, e, n);
    displaystudent(s, n);
    displayemployee(e, n);

    return 0;
}

void info_student(struct student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n----Enter details of Student %d----\n", i + 1);
        printf("First name: ");
        scanf("%s", s[i].f_name);
        printf("Last name: ");
        scanf("%s", s[i].l_name);
        printf("Grade point: ");
        scanf("%f", &s[i].GPI);
    }
}

void info_employee(struct employee e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n----Enter details of Employee %d----\n", i + 1);
        printf("First name: ");
        scanf("%s", e[i].f_name);
        printf("Last name: ");
        scanf("%s", e[i].l_name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void updatesalary(struct student s[], struct employee e[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (strcmp(s[i].f_name, e[j].f_name) == 0 &&
                strcmp(s[i].l_name, e[j].l_name) == 0 &&
                s[i].GPI > 3.0) {
                e[j].salary *= 1.10;
            }
        }
    }
}

void displaystudent(struct student s[], int n) {
    printf("\n-----Student Record-----\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Grade point: %f\n", s[i].f_name, s[i].l_name, s[i].GPI);
    }
}

void displayemployee(struct employee e[], int n) {
    printf("\n-----Employee Record-----\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Salary: %f\n", e[i].f_name, e[i].l_name, e[i].salary);
    }
}
