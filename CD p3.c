#include <stdio.h>
#include <stdbool.h>

int main() {
    char input[100];

    printf("Enter an arithmetic expression: ");
    scanf("%s", input);
    int i = 0;

    while (input[i] != '\0') {
      
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n') {
            i++;
            continue;
        }

       
        bool isValidOperator = false;

        if (input[i] == '+') {
            isValidOperator = true;
        } else if (input[i] == '-') {
            isValidOperator = true;
        } else if (input[i] == '*') {
            isValidOperator = true;
        } else if (input[i] == '/') {
            isValidOperator = true;
        } else if (input[i] == '=') {
            isValidOperator = true;
        } 

        if (isValidOperator) {
            printf("%c - operator.\n", input[i]);
        } else {
            printf("%c - not an operator.\n", input[i]);
        }

        i++;
    }

    return 0;
}
