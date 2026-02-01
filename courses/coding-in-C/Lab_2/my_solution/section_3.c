#include <stdio.h>

void print_column_letters() {
    printf("   ");

    for (int column = 0; column < 8; column++) {
        char letter = 'A' + column;
        printf("%c   ", letter);
    }

    printf("\n");
}

void print_horizontal_line() {
    printf(" ");

    for (int column = 0; column < 8; column++) {
        printf("+---");
    }

    printf("+\n");
}

void print_chessboard() {
    print_column_letters();
    print_horizontal_line();
}

int main() {
    print_chessboard();

    return 0;
}
