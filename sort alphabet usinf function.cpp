#include <stdio.h>
#include <string.h>

int sortDescending(char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length ; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] < str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("String in descending order: %s\t", str);
}
void sortDescending(char str);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", &str);
    
    sortDescending(str);
    
    
    
    return 0;
}
