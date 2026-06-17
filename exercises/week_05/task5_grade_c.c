#include<stdio.h>

int main() {
    int numDays;
    int temperatures[30];
    int menuOption;
    float total;
    float average;
    int highest;
    int lowest;

    printf("Enter number of days (1-30): ");
    while(scanf(" %i", &numDays) < 1 || numDays < 1 || numDays > 30) {
        printf("Invalid. Enter days (1-30): ");
    }

    for(int i = 0; i < numDays; i++) {
        printf("Enter temperature for day %i: ", i + 1);
        scanf(" %i", &temperatures[i]);
    }

    menuOption = 0;
    while(menuOption != 7) {
        printf("\n1. Display all temperatures\n");
        printf("2. Calculate average temperature\n");
        printf("3. Highest and lowest temperature\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf(" %i", &menuOption);

        switch(menuOption) {
            case 1:
                printf("\nTemperatures:\n");
                for(int i = 0; i < numDays; i++) {
                    printf("Day %i: %i C\n", i + 1, temperatures[i]);
                }
            break;
            case 2:
                total = 0;
                for(int i = 0; i < numDays; i++) {
                    total = total + temperatures[i];
                }
                average = total / numDays;
                printf("\nAverage temperature: %.2f C\n", average);
            break;
            case 3:
                highest = temperatures[0];
                lowest = temperatures[0];
                for(int i = 1; i < numDays; i++) {
                    if(temperatures[i] > highest) highest = temperatures[i];
                    if(temperatures[i] < lowest) lowest = temperatures[i];
                }
                printf("\nHighest: %i C\n", highest);
                printf("Lowest: %i C\n", lowest);
            break;
            case 7:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid choice. Please enter 1, 2, 3 or 7.\n");
            break;
        }
    }

    return 0;
}
