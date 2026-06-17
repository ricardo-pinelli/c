#include<stdio.h>

int main() {
    int month;
    int startDay;
    int totalDays;
    char *monthName;
    int col;
    int saturdays = 0;
    int sundays = 0;

    printf("Enter month (1-12): ");
    while(scanf(" %i", &month) < 1 || month < 1 || month > 12) {
        printf("Invalid. Enter month (1-12): ");
    }

    printf("Enter starting weekday (1=Monday, 7=Sunday): ");
    while(scanf(" %i", &startDay) < 1 || startDay < 1 || startDay > 7) {
        printf("Invalid. Enter weekday (1-7): ");
    }

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

    printf("\n      %s 2025\n", monthName);
    printf("Mon  Tue  Wed  Thu  Fri  Sat  Sun\n");

    col = 1;

    for(int i = 1; i < startDay; i++) {
        printf("     ");
        col++;
    }

    for(int day = 1; day <= totalDays; day++) {
        printf("%-5i", day);
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
    printf("Saturdays: %i\n", saturdays);
    printf("Sundays: %i\n", sundays);

    return 0;
}
