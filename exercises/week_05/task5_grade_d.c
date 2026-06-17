#include<stdio.h>

int main() {
    int numDays;
    int temperatures[30];
    int menuOption;
    float total;
    float average;

    printf("Enter number of days (1-30): ");
    scanf(" %i", &numDays);

    for(int i = 0; i < numDays; i++) {
        printf("Enter temperature for day %i: ", i + 1);
        scanf(" %i", &temperatures[i]);
    }

    printf("\n1. Display all temperatures\n");
    printf("2. Calculate average temperature\n");
    printf("Enter choice: ");
    scanf(" %i", &menuOption);

    if(menuOption == 1) {
        printf("\nTemperatures:\n");
        for(int i = 0; i < numDays; i++) {
            printf("Day %i: %i C\n", i + 1, temperatures[i]);
        }
    } else if(menuOption == 2) {
        total = 0;
        for(int i = 0; i < numDays; i++) {
            total = total + temperatures[i];
        }
        average = total / numDays;
        printf("\nAverage temperature: %.2f C\n", average);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
