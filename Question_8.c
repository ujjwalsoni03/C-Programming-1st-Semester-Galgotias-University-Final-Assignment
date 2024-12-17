#include <stdio.h>
typedef enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} DayOfWeek;
const char *getDayOfWeekString(DayOfWeek day)
{
    switch (day)
    {
    case SUNDAY:
        return "Sunday";
    case MONDAY:
        return "Monday";
    case TUESDAY:
        return "Tuesday";
    case WEDNESDAY:
        return "Wednesday";
    case THURSDAY:
        return "Thursday";
    case FRIDAY:
        return "Friday";
    case SATURDAY:
        return "Saturday";
    default:
        return "Invalid";
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("No days to process\n");
        return 1;
    }
    int days[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &days[i]);
    }
    printf("Days in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        if (days[i] >= 0 && days[i] <= 6)
        {
            printf("%s", getDayOfWeekString(days[i]));
        }
        else
        {
            printf("Invalid");
        }
        if (i > 0)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}