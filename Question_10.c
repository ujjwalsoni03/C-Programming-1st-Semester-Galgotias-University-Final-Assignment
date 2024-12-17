#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    printf("All Students:\n");
    int highest = 0;
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, GPA: %.1f\n", students[i].name, students[i].age, students[i].gpa);
        if (students[i].gpa > students[highest].gpa) highest = i;
    }

    printf("Student with the highest GPA:\n");
    printf("Name: %s, Age: %d, GPA: %.1f", students[highest].name, students[highest].age, students[highest].gpa);

    return 0;
}