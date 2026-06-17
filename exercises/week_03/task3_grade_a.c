#include<stdio.h>

int main() {
    int menuOption;
    float goalDayLitres = 0.00;
    int environmentalFactor = 0;

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

    int totalDays = 1;
    int summaryPerDay[100];

    while (goalDayLitres == 0) {
        printf("Enter your daily goal of litres: ");
        while(scanf(" %f", &goalDayLitres) < 1 || goalDayLitres <= 0) {
            printf("Please enter a positive number: ");
        }
    };

    printf("\nChoose environmental factor:\n");
    printf("1. Cold/Indoor - no adjustment\n");
    printf("2. Hot/Active - +10%% adjustment\n");
    printf("3. Very Hot/Very Active - +20%% adjustment\n");

    printf("Enter your choice: ");
    
    
    while(scanf(" %i", &environmentalFactor) < 1 || environmentalFactor > 3) {
        printf("Invalid choice. Please enter 1, 2 or 3: ");
    }

    if(environmentalFactor == 2) {
        goalDayLitres = goalDayLitres * 1.10;
    } else if (environmentalFactor == 3) {
        goalDayLitres = goalDayLitres * 1.20;
    }

    printf("\n\n==== YOUR GOAL ====\n%.2f\n", goalDayLitres);

    while(addNewDay == 'y') {
        printf("\nWhat would you like to add? \n1: Millilitres\n2: Bottles (500 ml each)\n3: Cups (240 ml each)\n");
        
        printf("Enter your choice: ");
        while(scanf(" %i", &menuOption) < 1 || menuOption > 3) {
            printf("Invalid choice. Please enter 1, 2 or 3: ");
        }

        int dailyConsumedML;

        switch(menuOption) {
            case 1:
                printf("\n\nEnter water intake for today (ml): ");
                while(scanf(" %i", &millilitresConsumed) < 1 || millilitresConsumed <= 0) {
                    printf("Please enter a positive number: ");
                }

                dailyConsumedML = millilitresConsumed;

                waterIntakeMillilitres = waterIntakeMillilitres + millilitresConsumed;
                totalMLInputs++;

                printf("Added %i ml.\n", millilitresConsumed);
                printf("Your goal is %.2f%% completed\n", waterIntakeMillilitres / (goalDayLitres * litre) * 100);
            break;
            case 2:
                printf("How many bottles?: ");
                while(scanf(" %i", &bottlesConsumed) < 1 || bottlesConsumed <= 0) {
                    printf("Please enter a positive number: ");
                }
                
                int totalMLBottlesConsumed = bottlesConsumed * bottles;
                millilitresConsumed = totalMLBottlesConsumed;
                dailyConsumedML = totalMLBottlesConsumed;
                
                waterIntakeMillilitres = waterIntakeMillilitres + totalMLBottlesConsumed;
                totalBottlesInputs++;
                
                printf("Added %i ml.\n", totalMLBottlesConsumed);
                printf("Your goal is %.2f%% completed\n", waterIntakeMillilitres / (goalDayLitres * litre) * 100);
            break;
            case 3:
                printf("how many cups?: ");
                while(scanf(" %i", &cupsConsumed) < 1 || cupsConsumed <= 0) {
                    printf("Please enter a positive number: ");
                }

                int totalMLCupsConsumed = cupsConsumed * cup;
                dailyConsumedML = totalMLCupsConsumed;

                waterIntakeMillilitres = waterIntakeMillilitres + totalMLCupsConsumed;
                totalCupsInputs++;

                printf("Added %i ml.\n", totalMLCupsConsumed);
                printf("Your goal is %.2f%% completed\n", waterIntakeMillilitres / (goalDayLitres * litre) * 100);
            break;
        }

        summaryPerDay[totalDays] = dailyConsumedML;

        if(totalDays == 100) {
            printf("Maximum number of days reached. Ending input.\n");
            break;
        } else {
            printf("\nAdd another entry? (y/n): ");
            while(scanf(" %c", &addNewDay) != 'y' && addNewDay != 'n') {
                printf("Please enter y or n: ");
            }

            totalDays++;
        }

    };

    waterIntakeLitres = waterIntakeMillilitres / litre;

    printf("\n\n==== DAILY SUMMARY ====\n");

    int daysMetGoal = 0;
    int longestStreak = 0;
    int currentStreak = 0;

    printf("\n\n\nSummary:\n");
    for(int i = 1; i <= totalDays; i++) {
        printf("Day %i: %i ml (%.2f L)\n", i, summaryPerDay[i], (float)summaryPerDay[i] / litre);
        if(summaryPerDay[i] >= goalDayLitres * litre) {
            daysMetGoal++;
            currentStreak++;
            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
    }
    printf("Total: %.0f ml (%.2f L)\n", waterIntakeMillilitres, waterIntakeLitres);
    printf("Entries — Bottles: %i, Cups: %i, Millilitres: %i\n", totalBottlesInputs, totalCupsInputs, totalMLInputs);
    printf("Days meeting/exceeding goal: %i out of %i\n", daysMetGoal, totalDays);
    printf("Longest streak: %i day(s)\n", longestStreak);
    
    return 0;
}
