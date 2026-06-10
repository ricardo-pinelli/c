#include<stdio.h>

int main() {
    int menuOption;

    float millilitresConsumed;
    float bottlesConsumed;
    float cupsConsumed;

    float totalLitres;
    float totalCups;

    float litre = 1000;
    float bottles = 500;
    float cup = 240;

    char addNewDay = 'y';
    float waterIntake = 0.00;
    int totalDays;

    while(addNewDay == 'y') {
        printf("What would you like to add? \n1: Millilitres\n2: Bottles (500 ml each)\n3: Cups (240 ml each)\n");

        printf("Enter your choice: ");
        scanf(" %i", &menuOption);

        switch(menuOption) {
            case 1:
                printf("Enter water intake for today (ml): ");
                scanf(" %f", &millilitresConsumed);
        
                totalLitres = millilitresConsumed / litre;
                totalCups = millilitresConsumed / cup;
            break;
            case 2:
                printf("How many bottles?: ");
                scanf(" %f", &millilitresConsumed);
        
                totalLitres = millilitresConsumed / bottles;
                totalCups = millilitresConsumed / cup;
            break;
            case 3: 
                printf("how many cups?: ");
                scanf(" %f", &cupsConsumed);

                totalLitres = cupsConsumed * cup;
                printf("Litres: %.2fL | ", totalLitres);
        }



        // printf("Litres: %.2fL | ", totalLitres);
        // printf("Cups (240 ml): %.2f cups \n", totalCups);

        // waterIntake = waterIntake + totalLitres;
        // totalDays++;

        printf("Add another day? (y/n): ");
        scanf(" %c", &addNewDay);
    };

    printf("You tracked %i days. Total: %.2f L \n", totalDays, waterIntake);

    return 0;
}


