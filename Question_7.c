#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100
typedef struct
{
    char name[MAX_NAME_LENGTH];
    int marks;
} Student;
float calculateAverageMarks(Student *students, int n)
{
    int totalMarks = 0;
    for (int i = 0; i < n; i++)
    {
        totalMarks += students[i].marks;
    }
    return (float)totalMarks / n;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        return 1;
    }
    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", students[i].name, &students[i].marks);
    }
    float averageMarks = calculateAverageMarks(students, n);
    printf("Average Marks: %.2f\n", averageMarks);
    free(students);

    return 0;
}