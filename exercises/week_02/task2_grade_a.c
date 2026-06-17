#include<stdio.h>

int main () {
    int menuOption = 0;

    char zone;
    char ticketType;
    float ticketPrice;
    int ticketsQuantity;
    char requestAudioGuide;
    float totalPriceBeforeDiscount;
    float totalPriceWithDiscount;
    float addOnCost;
    char returnToMenu;

    char *zoneLabel;
    char *ticketTypeLabel;

    while(menuOption != 3) {
        switch(menuOption) {
            case 0:
                printf("\n\n--- City Aquarium Ticketing ---\n");
                printf("1. Book Tickets\n2. View Ticket Prices\n3. Exit\n");
                printf("Enter choice: ");
                scanf(" %i", &menuOption);

                if (menuOption > 3) {
                    printf("Invalid option. Please select 1, 2 or 3.\n");
                    menuOption = 0;
                };
            break;
            case 1:
                printf("\n\n--- Book Tickets ---\n");
                printf("Select the zone (S, R, P): ");
                scanf(" %c", &zone);

                if (zone != 'S' && zone != 'R' && zone != 'P') {
                    printf("Invalid zone!\n");
                    break;
                }

                printf("Select the ticket type (N, E): ");
                scanf(" %c", &ticketType);

                if (ticketType != 'N' && ticketType != 'E') {
                    printf("Invalid ticket type!\n");
                    break;
                }

                printf("Select the quantity ticket: ");
                scanf(" %i", &ticketsQuantity);

                printf("Do you want an Audio Guide (y/n) at £4.50 per ticket: ");
                scanf(" %c", &requestAudioGuide);

                if (ticketsQuantity <= 0) {
                    printf("Please, select the quantity ticket\n");
                    break;
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
                };

                switch(ticketType) {
                    case 'N':
                        ticketTypeLabel = "Standard";
                        break;
                    case 'E':
                        ticketTypeLabel = "Express";
                        break;
                };

                totalPriceBeforeDiscount = ticketPrice * ticketsQuantity;
                totalPriceWithDiscount = totalPriceBeforeDiscount;
                addOnCost = 0.00;

                if (ticketsQuantity > 5) {
                    totalPriceWithDiscount = totalPriceBeforeDiscount * 0.85;
                };

                if (requestAudioGuide == 'y') {
                    addOnCost = 4.50 * ticketsQuantity;
                    totalPriceWithDiscount = totalPriceWithDiscount + addOnCost;
                };

                float bulkDiscount = totalPriceBeforeDiscount - (totalPriceWithDiscount - addOnCost);

                printf("\n\n=== TICKET INFORMATION ===\n\n");
                printf("Zone: %s\n", zoneLabel);
                printf("Ticket type: %s\n", ticketTypeLabel);
                printf("Ticket quantity: %i\n", ticketsQuantity);
                printf("Audio Guide: %c\n", requestAudioGuide);
                printf("Total Before Discount: £%.2f\n", totalPriceBeforeDiscount);
                if (ticketsQuantity > 5) {
                    printf("Bulk Discount (15%%): -£%.2f\n", bulkDiscount);
                }
                printf("Add-on Cost: £%.2f\n", addOnCost);
                printf("Final Total: £%.2f\n\n", totalPriceWithDiscount);

                printf("Return to menu? (y/n)\n");
                scanf(" %c", &returnToMenu);

                if (returnToMenu != 'y') {
                    menuOption = 1;
                }
            break;

            case 2:
                printf("\n\n--- View Ticket Prices --- \n");
                printf("Zone\t\tStandard\tExpress\n\n");
                printf("Sharks\t\t£22.00\t\t£32.00\n");
                printf("Reefs\t\t£18.00\t\t£28.00\n");
                printf("Penguins\t£16.00\t\t£26.00\n");

                menuOption = 0;
            break;
        };
    };

    return 0;
};
