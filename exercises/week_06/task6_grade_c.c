#include<stdio.h>
#include<string.h>

int main() {
    char *books[8];
    char *temp;

    books[0] = "North Passage";
    books[1] = "Echoes of the Atrium";
    books[2] = "Archive Key";
    books[3] = "Lantern Works";
    books[4] = "The Glass Mountain";
    books[5] = "Westward Tide";
    books[6] = "Iron Meridian";
    books[7] = "Dusk Protocol";

    printf("Before: ");
    for(int i = 0; i < 8; i++) {
        printf("\"%s\"", books[i]);
        if(i < 7) printf(", ");
    }
    printf("\n");

    for(int i = 1; i < 8; i++) {
        if(strcasecmp(books[i], books[0]) < 0) {
            temp = books[0];
            books[0] = books[i];
            books[i] = temp;
        }
    }

    printf("After: ");
    for(int i = 0; i < 8; i++) {
        printf("\"%s\"", books[i]);
        if(i < 7) printf(", ");
    }
    printf("\n");

    return 0;
}
