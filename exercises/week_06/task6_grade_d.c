#include<stdio.h>

int main() {
    char *books[8];

    books[0] = "North Passage";
    books[1] = "Echoes of the Atrium";
    books[2] = "Archive Key";
    books[3] = "Lantern Works";
    books[4] = "The Glass Mountain";
    books[5] = "Westward Tide";
    books[6] = "Iron Meridian";
    books[7] = "Dusk Protocol";

    for(int i = 0; i < 8; i++) {
        printf("Current Title: \"%s\"\n", books[i]);
        printf("First Title: \"%s\"\n", books[0]);
    }

    return 0;
}
