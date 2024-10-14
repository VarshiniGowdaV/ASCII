#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    if (isdigit(input))
    {
        printf("The input is a number.\n");
    }
    else if (isalpha(input)) {
        printf("The input is a character.\n");
    }
    else
    {
        printf("The input is a symbol.\n");
    }
    return 0;
}
