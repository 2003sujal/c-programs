#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
   
    char input[100];
    scanf("%s", input);
    int length = strlen(input);
    bool char_exists[26] = {false};
    int unique_count = 0;
    for (int i = 0; i < length; i++) {
        int index = input[i] - 'a';
        if (!char_exists[index]) {
            char_exists[index] = true;
            unique_count++;
        }
    }
    if (unique_count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}

