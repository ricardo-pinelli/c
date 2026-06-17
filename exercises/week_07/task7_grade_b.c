#include<stdio.h>
#include<string.h>

#define MAX_ITEMS 100

struct Item {
    int id;
    char assetTag[20];
    char status[2];
};

int addItem(int id, char assetTag[], char status[]) {
    struct Item item;
    FILE *file;

    file = fopen("loans.txt", "r");
    if(file != NULL) {
        while(fscanf(file, "%i %s %s", &item.id, item.assetTag, item.status) == 3) {
            if(item.id == id) {
                printf("Item with ID %i already exists.\n", id);
                fclose(file);
                return 0;
            }
        }
        fclose(file);
    }

    file = fopen("loans.txt", "a");
    fprintf(file, "%i %s %s\n", id, assetTag, status);
    fclose(file);

    printf("Item added.\n");
    return 1;
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

int searchItemById(int id) {
    struct Item item;
    FILE *file;
    int position = 0;

    file = fopen("loans.txt", "r");
    if(file == NULL) {
        printf("No items found.\n");
        return -1;
    }

    while(fscanf(file, "%i %s %s", &item.id, item.assetTag, item.status) == 3) {
        if(item.id == id) {
            printf("Found at position %i: %s | Status: %s\n", position, item.assetTag, item.status);
            fclose(file);
            return position;
        }
        position++;
    }

    printf("Item with ID %i not found.\n", id);
    fclose(file);
    return -1;
}

int updateItem(int id, const char newAssetTag[], const char newStatus[]) {
    struct Item items[MAX_ITEMS];
    int count = 0;
    int found = 0;
    FILE *file;

    file = fopen("loans.txt", "r");
    if(file == NULL) {
        printf("No items found.\n");
        return 0;
    }

    while(count < MAX_ITEMS && fscanf(file, "%i %s %s", &items[count].id, items[count].assetTag, items[count].status) == 3) {
        if(items[count].id == id) {
            strcpy(items[count].assetTag, newAssetTag);
            strcpy(items[count].status, newStatus);
            found = 1;
        }
        count++;
    }

    fclose(file);

    if(!found) {
        printf("Item with ID %i not found.\n", id);
        return 0;
    }

    file = fopen("loans.txt", "w");
    for(int i = 0; i < count; i++) {
        fprintf(file, "%i %s %s\n", items[i].id, items[i].assetTag, items[i].status);
    }
    fclose(file);

    printf("Item updated.\n");
    return 1;
}

int main() {
    int menuOption = 0;
    int id;
    char assetTag[20];
    char status[2];

    FILE *file = fopen("loans.txt", "a");
    fclose(file);

    while(menuOption != 5) {
        printf("\n1. Add item\n2. Display items\n3. Search by ID\n4. Update item\n5. Exit\n");
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
                printf("Enter ID to update: ");
                scanf(" %i", &id);
                printf("Enter new asset tag: ");
                scanf(" %s", assetTag);
                printf("Enter new status (A=Available, L=Loaned): ");
                scanf(" %s", status);
                updateItem(id, assetTag, status);
            break;
            case 5:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
