#include <stdio.h>

int main() {
    char zone;
    char ticketType;
    float ticketPrice;
    int ticketsQuantity;
    char requestAudioGuide;
    char *zoneLabel;
    char *ticketTypeLabel;

    printf("Select the zone (S, R, P): ");
    scanf(" %c", &zone);

    if (zone != 'S' && zone != 'R' && zone != 'P') {
        printf("Invalid zone!\n");
        return 1;
    }

    printf("Select the ticket type (N, E): ");
    scanf(" %c", &ticketType);

    if (ticketType != 'N' && ticketType != 'E') {
        printf("Invalid ticket type!\n");
        return 1;
    }

    printf("Number of tickets: ");
    scanf(" %d", &ticketsQuantity);

    if (ticketsQuantity <= 0) {
        printf("Number of tickets must be greater than 0.\n");
        return 1;
    }

    printf("Do you want an Audio Guide (y/n) at £4.50 per ticket: ");
    scanf(" %c", &requestAudioGuide);

    switch(zone) {
        case 'S':
            zoneLabel = "Sharks";
            if (ticketType == 'N') ticketPrice = 22.00;
            if (ticketType == 'E') ticketPrice = 32.00;
            break;
        case 'R':
            zoneLabel = "Reefs";
            if (ticketType == 'N') ticketPrice = 18.00;
            if (ticketType == 'E') ticketPrice = 28.00;
            break;
        case 'P':
            zoneLabel = "Penguins";
            if (ticketType == 'N') ticketPrice = 16.00;
            if (ticketType == 'E') ticketPrice = 26.00;
            break;
    }

    switch(ticketType) {
        case 'N': ticketTypeLabel = "Standard"; break;
        case 'E': ticketTypeLabel = "Express"; break;
    }

    float totalPriceBeforeDiscount = ticketPrice * ticketsQuantity;
    float totalPriceWithDiscount = totalPriceBeforeDiscount;
    float addOnCost = 0.00;

    if (ticketsQuantity > 5) {
        totalPriceWithDiscount = totalPriceBeforeDiscount * 0.85;
    }

    if (requestAudioGuide == 'y') {
        addOnCost = 4.50 * ticketsQuantity;
        totalPriceWithDiscount = totalPriceWithDiscount + addOnCost;
    }

    float bulkDiscount = totalPriceBeforeDiscount - (totalPriceWithDiscount - addOnCost);

    printf("\nZone: %s\n", zoneLabel);
    printf("Ticket Type: %s\n", ticketTypeLabel);
    printf("Tickets: %d\n", ticketsQuantity);
    printf("Total Before Discount: £%.2f\n", totalPriceBeforeDiscount);
    if (ticketsQuantity > 5) {
        printf("Bulk Discount (15%%): -£%.2f\n", bulkDiscount);
    }
    printf("Add-on Cost: £%.2f\n", addOnCost);
    printf("Final Total: £%.2f\n", totalPriceWithDiscount);

    return 0;
}
