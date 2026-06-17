#include<stdio.h>

int main() {
    int temperatures[50];
    int menuOption;
    float total;
    float average;
    int highest;
    int lowest;
    int threshold;
    int aboveCount;
    int belowCount;
    int count;
    int temp;
    int weekCount;
    float weekTotal;

    count = 0;

    printf("Enter temperatures (-1 to stop):\n");
    while(count < 50) {
        printf("Day %i: ", count + 1);
        scanf(" %i", &temp);
        if(temp == -1) break;
        temperatures[count] = temp;
        count++;
    }

    temperatures[count] = -1;

    menuOption = 0;
    while(menuOption != 7) {
        printf("\n1. Display all temperatures\n");
        printf("2. Calculate average temperature\n");
        printf("3. Highest and lowest temperature\n");
        printf("4. Count days above/below threshold\n");
        printf("5. Weekly average temperature\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf(" %i", &menuOption);

        switch(menuOption) {
            case 1:
                printf("\nTemperatures:\n");
                for(int i = 0; temperatures[i] != -1; i++) {
                    printf("Day %i: %i C\n", i + 1, temperatures[i]);
                }
            break;
            case 2:
                total = 0;
                for(int i = 0; temperatures[i] != -1; i++) {
                    total = total + temperatures[i];
                }
                average = total / count;
                printf("\nAverage temperature: %.2f C\n", average);
            break;
            case 3:
                highest = temperatures[0];
                lowest = temperatures[0];
                for(int i = 1; temperatures[i] != -1; i++) {
                    if(temperatures[i] > highest) highest = temperatures[i];
                    if(temperatures[i] < lowest) lowest = temperatures[i];
                }
                printf("\nHighest: %i C\n", highest);
                printf("Lowest: %i C\n", lowest);
            break;
            case 4:
                printf("Enter threshold temperature: ");
                scanf(" %i", &threshold);
                aboveCount = 0;
                belowCount = 0;
                for(int i = 0; temperatures[i] != -1; i++) {
                    if(temperatures[i] > threshold) aboveCount++;
                    if(temperatures[i] < threshold) belowCount++;
                }
                printf("\nDays above %i C: %i\n", threshold, aboveCount);
                printf("Days below %i C: %i\n", threshold, belowCount);
            break;
            case 5:
                weekCount = 1;
                weekTotal = 0;
                printf("\nWeekly averages:\n");
                for(int i = 0; temperatures[i] != -1; i++) {
                    weekTotal = weekTotal + temperatures[i];
                    if((i + 1) % 7 == 0) {
                        printf("Week %i: %.2f C\n", weekCount, weekTotal / 7);
                        weekCount++;
                        weekTotal = 0;
                    }
                }
                if(count % 7 != 0 && weekTotal > 0) {
                    printf("Week %i: %.2f C (incomplete week)\n", weekCount, weekTotal / (count % 7));
                }
            break;
            case 7:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid choice. Please enter 1, 2, 3, 4, 5 or 7.\n");
            break;
        }
    }

    return 0;
}
