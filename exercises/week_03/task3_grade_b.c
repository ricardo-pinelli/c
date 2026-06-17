#include<stdio.h>

int main() {
    int menuOption;

    int millilitresConsumed;
    int bottlesConsumed;
    int cupsConsumed;

    int litre = 1000;
    int bottles = 500;
    int cup = 240;

    float waterIntakeLitres = 0.00;
    float waterIntakeMillilitres = 0;

    char addNewDay = 'y';

    int totalMLInputs = 0;
    int totalBottlesInputs = 0;
    int totalCupsInputs = 0;

    while(addNewDay == 'y') {
        printf("What would you like to add? \n1: Millilitres\n2: Bottles (500 ml each)\n3: Cups (240 ml each)\n");

        printf("Enter your choice: ");
        scanf(" %i", &menuOption);

        switch(menuOption) {
            case 1:
                printf("\n\nEnter water intake for today (ml): ");
                scanf(" %i", &millilitresConsumed);

                waterIntakeMillilitres = waterIntakeMillilitres + millilitresConsumed;
                totalMLInputs++;

                printf("Added %i ml.\n", millilitresConsumed);
            break;
            case 2:
                printf("How many bottles?: ");
                scanf(" %i", &bottlesConsumed);

                int totalMLBottlesConsumed = bottlesConsumed * bottles;

                waterIntakeMillilitres = waterIntakeMillilitres + totalMLBottlesConsumed;
                totalBottlesInputs++;

                printf("Added %i ml.\n", totalMLBottlesConsumed);
            break;
            case 3:
                printf("how many cups?: ");
                scanf(" %i", &cupsConsumed);

                int totalMLCupsConsumed = cupsConsumed * cup;

                waterIntakeMillilitres = waterIntakeMillilitres + totalMLCupsConsumed;
                totalCupsInputs++;

                printf("Added %i ml.\n", totalMLCupsConsumed);
            break;
        }

        printf("\nAdd another entry? (y/n): ");
        scanf(" %c", &addNewDay);
    };

    waterIntakeLitres = waterIntakeMillilitres / litre;

    printf("\n\n\nSummary:\n");
    printf("Total: %.0f ml (%.2f L)\n", waterIntakeMillilitres, waterIntakeLitres);
    printf("Entries — Bottles: %i, Cups: %i, Millilitres: %i\n", totalBottlesInputs, totalCupsInputs, totalMLInputs);

    return 0;
}
