#include<stdio.h>

struct Item {
    int id;
    char assetTag[20];
    char status[2];
};

void addItem(int id, char assetTag[], char status[]) {
    struct Item item;
    FILE *file;

    file = fopen("loans.txt", "r");
    if(file != NULL) {
        while(fscanf(file, "%i %s %s", &item.id, item.assetTag, item.status) == 3) {
            if(item.id == id) {
                printf("Item with ID %i already exists.\n", id);
                fclose(file);
                return;
            }
        }
        fclose(file);
    }

    file = fopen("loans.txt", "a");
    fprintf(file, "%i %s %s\n", id, assetTag, status);
    fclose(file);

    printf("Item added.\n");
}

void displayItems() {
    struct Item item;
    FILE *file;

    file = fopen("loans.txt", "r");
    if(file == NULL) {
        printf("No items found.\n");
        return;
    }

    printf("\n%-5s %-15s %s\n", "ID", "Asset Tag", "Status");
    while(fscanf(file, "%i %s %s", &item.id, item.assetTag, item.status) == 3) {
        printf("%-5i %-15s %s\n", item.id, item.assetTag, item.status);
    }

    fclose(file);
}

void searchItemById(int id) {
    struct Item item;
    FILE *file;
    int found = 0;

    file = fopen("loans.txt", "r");
    if(file == NULL) {
        printf("No items found.\n");
        return;
    }

    while(fscanf(file, "%i %s %s", &item.id, item.assetTag, item.status) == 3) {
        if(item.id == id) {
            printf("ID: %i | Asset Tag: %s | Status: %s\n", item.id, item.assetTag, item.status);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Item with ID %i not found.\n", id);
    }

    fclose(file);
}

int main() {
    int menuOption = 0;
    int id;
    char assetTag[20];
    char status[2];

    FILE *file = fopen("loans.txt", "a");
    fclose(file);

    while(menuOption != 4) {
        printf("\n1. Add item\n2. Display items\n3. Search by ID\n4. Exit\n");
        printf("Enter choice: ");
        scanf(" %i", &menuOption);

        switch(menuOption) {
            case 1:
                printf("Enter ID: ");
                scanf(" %i", &id);
                printf("Enter asset tag: ");
                scanf(" %s", assetTag);
                printf("Enter status (A=Available, L=Loaned): ");
                scanf(" %s", status);
                addItem(id, assetTag, status);
            break;
            case 2:
                displayItems();
            break;
            case 3:
                printf("Enter ID to search: ");
                scanf(" %i", &id);
                searchItemById(id);
            break;
            case 4:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
