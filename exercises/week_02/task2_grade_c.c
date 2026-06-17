#include <stdio.h>

int main() {
    char zone;
    char ticketType;
    float ticketPrice;
    int ticketsQuantity;
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

    float totalCost = ticketPrice * ticketsQuantity;

    printf("\nZone: %s\n", zoneLabel);
    printf("Ticket Type: %s\n", ticketTypeLabel);
    printf("Tickets: %d\n", ticketsQuantity);
    printf("Total Cost: £%.2f\n", totalCost);

    return 0;
}
