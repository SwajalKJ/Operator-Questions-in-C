/*
Q10. Finding day of week based on reference date, say 1 st January 1970 which is Thursday.
(Hint:- calculate no.of days elapsed from reference date to given date)
*/
#include <stdio.h>

int calculate_days_elapsed(int year, int month, int day)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_elapsed = 0;

    for (int i = 1970; i < year; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            days_elapsed += 366; // Leap year
        }
        else
        {
            days_elapsed += 365; // Non-leap year
        }
    }
    int i = 0;

    for (int i = 0; i < month - 1; i++)
    {
        if (i == 1)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                days_elapsed += 29;
            }
            else
            {
                days_elapsed += 28;
            }
        }
        else
        {
            days_elapsed += days_in_month[i];
        }
    }

    days_elapsed += day;
    return days_elapsed;
}

char *get_day_of_week(int days_elapsed)
{
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day_of_week = ((days_elapsed - 1) % 7) + 4;
    return days[day_of_week % 7];
}

int main()
{
    int year, month, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the day: ");
    scanf("%d", &day);

    int days_elapsed = calculate_days_elapsed(year, month, day);
    char *day_of_week = get_day_of_week(days_elapsed);

    printf("The day of the week is: %s\n", day_of_week);
    return 0;
}
