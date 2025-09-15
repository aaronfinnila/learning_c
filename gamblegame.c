#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int gamble(int coins);

int main() {

    int coins = 1;
    srand(time(NULL));

    while (coins > 0 && coins < 100) {
        coins = gamble(coins);
    }

    if (coins >= 100) {
        printf("\n----CONGRATULATIONS! You have won!----\n\nTotal coins: %d", coins);
    }

    if (coins <= 0) {
        printf("\n----YOU LOST----\n\nBetter luck next time!");
    }

    return 0;
}

int gamble(int coins) {

    char answer[10] = "";
    char result[10] = "";
    int win = 0;

    printf("\nHello. You have %d coin%s.\n\nWould you like to gamble %s?\n\n (yes / no)\n\n", coins, (coins > 1) ? "s" : "",
    (coins > 1) ? "them" : "it");
    fflush(stdout);
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = '\0';

    if (strcmp(answer, "no") == 0) {
        return -1;
    } else {
        int r = rand();
        if (r % 14 == 0) {
            strcpy(result, "green");
        } else if (r % 2 == 0) {
            strcpy(result, "black");
        } else {
            strcpy(result, "red");
        }
    }

    printf("\nWhat would you like to bet on?\n\n(green, black, red)\n\n");
    fflush(stdout);
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = '\0';

    printf("\n\nRoulette result: %s\n\n", result);

    if (strcmp(answer, result) == 0 && strcmp(answer, "green") == 0) {
        win = coins*14;
    } else if (strcmp(answer, result) == 0) {
        win = coins*2;
    } else {
        return -1;
    }

    return win;
}