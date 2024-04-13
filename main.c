#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hangman.h"

int main() {
    char secret[100];
    int result = get_word(secret);
    if (result != 0) {
        printf("Error");
        return 1;
    }
    printf("%s", secret);
    return 0;
}