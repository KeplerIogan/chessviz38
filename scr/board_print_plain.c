#include <stdio.h>
#include "board_print_plain.h"
#include "board.h"

void print_board(board *b) {

    short i, j;

    for(i = 1; i < 9; i++) {
        for(j = 1; j < 9; j++) {

            printf("%c", b[i][j].name);
        }
        printf("\n");
    }
}