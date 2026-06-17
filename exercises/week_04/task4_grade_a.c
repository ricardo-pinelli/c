#include<stdio.h>

int main() {
    int month;
    int startDay;
    int totalDays;
    char *monthName;
    char *startDayName;
    int col;
    int saturdays;
    int sundays;
    int highlightDay;
    int navigate = 1;
    int daysBeforeMonth[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    printf("Enter month (1-12): ");
    while(scanf(" %i", &month) < 1 || month < 1 || month > 12) {
        printf("Invalid. Enter month (1-12): ");
    }

    while(navigate != 3) {
        saturdays = 0;
        sundays = 0;

        switch(month) {
            case 1:  monthName = "January";   totalDays = 31; break;
            case 2:  monthName = "February";  totalDays = 28; break;
            case 3:  monthName = "March";     totalDays = 31; break;
            case 4:  monthName = "April";     totalDays = 30; break;
            case 5:  monthName = "May";       totalDays = 31; break;
            case 6:  monthName = "June";      totalDays = 30; break;
            case 7:  monthName = "July";      totalDays = 31; break;
            case 8:  monthName = "August";    totalDays = 31; break;
            case 9:  monthName = "September"; totalDays = 30; break;
            case 10: monthName = "October";   totalDays = 31; break;
            case 11: monthName = "November";  totalDays = 30; break;
            case 12: monthName = "December";  totalDays = 31; break;
        }

        startDay = ((2 + daysBeforeMonth[month - 1]) % 7) + 1;

        switch(startDay) {
            case 1: startDayName = "Monday";    break;
            case 2: startDayName = "Tuesday";   break;
            case 3: startDayName = "Wednesday"; break;
            case 4: startDayName = "Thursday";  break;
            case 5: startDayName = "Friday";    break;
            case 6: startDayName = "Saturday";  break;
            case 7: startDayName = "Sunday";    break;
        }

        printf("Enter date to highlight (1-%i, 0 for none): ", totalDays);
        while(scanf(" %i", &highlightDay) < 1 || highlightDay < 0 || highlightDay > totalDays) {
            printf("Invalid. Enter date (1-%i) or 0 for none: ", totalDays);
        }

        printf("\n      %s 2025\n", monthName);
        printf("Starts on: %s\n", startDayName);
        printf("Mon  Tue  Wed  Thu  Fri  Sat  Sun\n");

        col = 1;

        for(int i = 1; i < startDay; i++) {
            printf("     ");
            col++;
        }

        for(int day = 1; day <= totalDays; day++) {
            if(day == highlightDay) {
                printf("[%2i] ", day);
            } else {
                printf("%-5i", day);
            }
            if(col == 6) saturdays++;
            if(col == 7) sundays++;
            if(col == 7) {
                printf("\n");
                col = 1;
            } else {
                col++;
            }
        }

        if(col > 1) printf("\n");
        printf("Saturdays: %i | Sundays: %i\n", saturdays, sundays);

        printf("\n1. Previous month\n2. Next month\n3. Exit\n");
        printf("Enter choice: ");
        while(scanf(" %i", &navigate) < 1 || navigate < 1 || navigate > 3) {
            printf("Invalid. Enter 1, 2 or 3: ");
        }

        if(navigate == 1) {
            if(month == 1) {
                printf("Already at January.\n");
            } else {
                month--;
            }
        } else if(navigate == 2) {
            if(month == 12) {
                printf("Already at December.\n");
            } else {
                month++;
            }
        }
    }

    return 0;
}
