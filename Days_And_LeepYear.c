#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

// Function to calculate the day of the year
int dayOfYear(int year, int month, int day) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // If it's a leap year, February has 29 days
    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    int dayOfYear = 0;
    for (int i = 1; i < month; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;

    return dayOfYear;
}

int main() {
    int year, month, day;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    printf("Enter a day (1-31): ");
    scanf("%d", &day);

    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid input. Please enter valid values.\n");
    } else {
        int DayOfYear = dayOfYear(year, month, day);

        if (isLeapYear(year)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }

        printf("Day of the year: %d\n", DayOfYear);
    }

    return 0;
}


