#include<stdio.h>

int main() {
    int month;
    int startDay;
    int totalDays = 30;
    char *monthName;
    int col;

    printf("Enter month (1-12): ");
    scanf(" %i", &month);

    printf("Enter starting weekday (1=Monday, 7=Sunday): ");
    scanf(" %i", &startDay);

    switch(month) {
        case 1:  monthName = "January";   break;
        case 2:  monthName = "February";  break;
        case 3:  monthName = "March";     break;
        case 4:  monthName = "April";     break;
        case 5:  monthName = "May";       break;
        case 6:  monthName = "June";      break;
        case 7:  monthName = "July";      break;
        case 8:  monthName = "August";    break;
        case 9:  monthName = "September"; break;
        case 10: monthName = "October";   break;
        case 11: monthName = "November";  break;
        case 12: monthName = "December";  break;
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
        if(col == 7) {
            printf("\n");
            col = 1;
        } else {
            col++;
        }
    }

    if(col > 1) printf("\n");

    return 0;
}
