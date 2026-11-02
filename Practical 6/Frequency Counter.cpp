#include <stdio.h>

int main() {
    char str[100];
    int count;

    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character has already been counted
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (str[k] == str[i]) {
                alreadyCounted = 1;
                break;
            }
        }

        // If it was already counted earlier, skip it
        if (alreadyCounted) {
            continue;
        }

        // Count occurrences of str[i] in the rest of the string
        count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[j] == str[i]) {
                count++;
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
