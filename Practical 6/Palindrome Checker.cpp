#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    // Calculate string length manually without string functions
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from start (i) and end (j)
    int i = 0;
    int j = length - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}
