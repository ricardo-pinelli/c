#include<stdio.h>
#include<string.h>

#define FILENAME "loans.txt"
#define MAX_ITEMS 100

struct Item {
    int id;
    char assetTag[20];
    char status[2];
};

struct Item items[MAX_ITEMS];
int itemCount = 0;

void loadFromFile() {
    FILE *file = fopen(FILENAME, "r");
    if(file == NULL) return;

    while(itemCount < MAX_ITEMS &&
          fscanf(file, "%i %s %s", &items[itemCount].id, items[itemCount].assetTag, items[itemCount].status) == 3) {
        itemCount++;
    }

    fclose(file);
    printf("%i item(s) loaded from file.\n", itemCount);
}

void saveToFile() {
    FILE *file = fopen(FILENAME, "w");
    if(file == NULL) {
        printf("Error saving file.\n");
        return;
    }

    for(int i = 0; i < itemCount; i++) {
        fprintf(file, "%i %s %s\n", items[i].id, items[i].assetTag, items[i].status);
    }

    fclose(file);
    printf("Data saved.\n");
}

int addItem(int id, char assetTag[], char status[]) {
    for(int i = 0; i < itemCount; i++) {
        if(items[i].id == id) {
            printf("Item with ID %i already exists.\n", id);
            return 0;
        }
    }

    if(itemCount >= MAX_ITEMS) {
        printf("Storage full.\n");
        return 0;
    }

    items[itemCount].id = id;
    strcpy(items[itemCount].assetTag, assetTag);
    strcpy(items[itemCount].status, status);
    itemCount++;

    printf("Item added.\n");
    return 1;
}

void displayItems() {
    if(itemCount == 0) {
        printf("No items found.\n");
        return;
    }

    printf("\n%-5s %-15s %s\n", "ID", "Asset Tag", "Status");
    for(int i = 0; i < itemCount; i++) {
        printf("%-5i %-15s %s\n", items[i].id, items[i].assetTag, items[i].status);
    }
}

int searchItemById(int id) {
    for(int i = 0; i < itemCount; i++) {
        if(items[i].id == id) {
            printf("Found: ID=%i | %s | Status: %s\n", items[i].id, items[i].assetTag, items[i].status);
            return i;
        }
    }

    printf("Item with ID %i not found.\n", id);
    return -1;
}

int updateItem(int id, const char newAssetTag[], const char newStatus[]) {
    for(int i = 0; i < itemCount; i++) {
        if(items[i].id == id) {
            strcpy(items[i].assetTag, newAssetTag);
            strcpy(items[i].status, newStatus);
            printf("Item updated.\n");
            return 1;
        }
    }

    printf("Item with ID %i not found.\n", id);
    return 0;
}

int deleteItem(int id) {
    for(int i = 0; i < itemCount; i++) {
        if(items[i].id == id) {
            for(int j = i; j < itemCount - 1; j++) {
                items[j] = items[j + 1];
            }
            itemCount--;
            printf("Item deleted.\n");
            return 1;
        }
    }

    printf("Item with ID %i not found.\n", id);
    return 0;
}

int main() {
    int menuOption = 0;
    int id;
    char assetTag[20];
    char status[2];

    loadFromFile();

    while(menuOption != 7) {
        printf("\n1. Add item\n2. Display items\n3. Search by ID\n4. Update item\n5. Delete item\n6. Save\n7. Exit\n");
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
                printf("Enter ID to delete: ");
                scanf(" %i", &id);
                deleteItem(id);
            break;
            case 6:
                saveToFile();
            break;
            case 7:
                saveToFile();
                printf("Goodbye.\n");
            break;
            default:
                printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
