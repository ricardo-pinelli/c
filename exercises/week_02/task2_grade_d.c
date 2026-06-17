#include <stdio.h>

int main() {
    char zone = 'S';
    char ticketType = 'N';
    float ticketPrice;
    char *zoneLabel;
    char *ticketTypeLabel;

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

    printf("Zone: %s\n", zoneLabel);
    printf("Ticket Type: %s\n", ticketTypeLabel);
    printf("Ticket Price: £%.2f\n", ticketPrice);

    return 0;
}
