#include <stdio.h>

void printPattern(int n) {
    if (n == 0) {
        return  ;
    }
    printPattern(n - 1);
    for (int i = 0; i < n; i++) {
        printf("1");
    }
    printf("\t");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printPattern(n);

    return 0 ;
}
