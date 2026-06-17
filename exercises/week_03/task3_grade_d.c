#include <stdio.h>

int main() {
    int millilitresConsumed;
    int litre = 1000;
    int cup = 240;

    printf("Enter water intake for today (ml): ");
    scanf(" %d", &millilitresConsumed);

    float litres = (float)millilitresConsumed / litre;
    float cups = (float)millilitresConsumed / cup;

    printf("Litres: %.2f L\n", litres);
    printf("Cups (240 ml): %.2f cups\n", cups);

    return 0;
}
