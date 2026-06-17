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

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 8; j++) {
            if(strcasecmp(books[j], books[i]) < 0) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
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
