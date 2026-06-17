#include<stdio.h>

struct Item {
    int id;
    char assetTag[20];
    char status[2];
};

void addItem() {
    struct Item item;
    FILE *file;

    printf("Enter ID: ");
    scanf(" %i", &item.id);
    printf("Enter asset tag: ");
    scanf(" %s", item.assetTag);
    printf("Enter status (A=Available, L=Loaned): ");
    scanf(" %s", item.status);

    file = fopen("loans.txt", "a");
    fprintf(file, "%i %s %s\n", item.id, item.assetTag, item.status);
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

int main() {
    FILE *file = fopen("loans.txt", "a");
    fclose(file);

    addItem();
    addItem();
    addItem();
    displayItems();

    return 0;
}
