#include <stdio.h>

int main() {
    int millilitresConsumed;
    int litre = 1000;
    int cup = 240;
    float totalMillilitres = 0;
    int days = 0;
    char addNewDay = 'y';

    while(addNewDay == 'y') {
        printf("Enter water intake for today (ml): ");
        scanf(" %d", &millilitresConsumed);

        float litres = (float)millilitresConsumed / litre;
        float cups = (float)millilitresConsumed / cup;

        printf("Litres: %.2f L | Cups: %.2f\n", litres, cups);

        totalMillilitres += millilitresConsumed;
        days++;

        printf("Add another day? (y/n): ");
        scanf(" %c", &addNewDay);
    }

    float totalLitres = totalMillilitres / litre;
    printf("You tracked %d days. Total: %.2f L\n", days, totalLitres);

    return 0;
}
