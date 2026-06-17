#include<stdio.h>
#include<string.h>

int main() {
    char *books[8];
    char *temp;
    char titleToDelete[50];
    int bookCount = 8;
    int found;

    books[0] = "North Passage";
    books[1] = "Echoes of the Atrium";
    books[2] = "Archive Key";
    books[3] = "Lantern Works";
    books[4] = "The Glass Mountain";
    books[5] = "Westward Tide";
    books[6] = "Iron Meridian";
    books[7] = "Dusk Protocol";

    printf("Original list: ");
    for(int i = 0; i < bookCount; i++) {
        printf("\"%s\"", books[i]);
        if(i < bookCount - 1) printf(", ");
    }
    printf("\n");

    for(int i = 0; i < bookCount; i++) {
        for(int j = i + 1; j < bookCount; j++) {
            if(strcasecmp(books[j], books[i]) < 0) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("After selection sort: ");
    for(int i = 0; i < bookCount; i++) {
        printf("\"%s\"", books[i]);
        if(i < bookCount - 1) printf(", ");
    }
    printf("\n");

    books[0] = "North Passage";
    books[1] = "Echoes of the Atrium";
    books[2] = "Archive Key";
    books[3] = "Lantern Works";
    books[4] = "The Glass Mountain";
    books[5] = "Westward Tide";
    books[6] = "Iron Meridian";
    books[7] = "Dusk Protocol";
    bookCount = 8;

    printf("\nBefore bubble sort: ");
    for(int i = 0; i < bookCount; i++) {
        printf("\"%s\"", books[i]);
        if(i < bookCount - 1) printf(", ");
    }
    printf("\n");

    for(int i = 0; i < bookCount - 1; i++) {
        for(int j = 0; j < bookCount - 1 - i; j++) {
            if(strcasecmp(books[j], books[j + 1]) > 0) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("After bubble sort: ");
    for(int i = 0; i < bookCount; i++) {
        printf("\"%s\"", books[i]);
        if(i < bookCount - 1) printf(", ");
    }
    printf("\n");

    printf("\nEnter title to delete: ");
    scanf(" %49[^\n]", titleToDelete);

    found = 0;
    for(int i = 0; i < bookCount; i++) {
        if(strcasecmp(books[i], titleToDelete) == 0) {
            found = 1;
            for(int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book deleted.\n");
            break;
        }
    }

    if(!found) {
        printf("Book not found.\n");
    }

    printf("Current list: ");
    for(int i = 0; i < bookCount; i++) {
        printf("\"%s\"", books[i]);
        if(i < bookCount - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
