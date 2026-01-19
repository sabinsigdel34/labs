#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char a;
    char i[11];   // 10 digits + '\0'

    while (1) {
        printf("Enter a phone number: ");
        scanf("%10s", i);

        if (i[0] == '9' && (i[1] == '8' || i[1] == '7') && strlen(i) == 10) {
            printf("correct number");
            break;
        } else {
            printf("\nEnter r to retry new number\nEnter q to exit\n");
            scanf(" %c", &a);   // leading space skips newline

            if (a == 'r') {
                continue;
            } else if (a == 'q') {
                break;
            } else {
                printf("invalid command\n");
            }
        }
    }

    getch();
    return 0;
}
