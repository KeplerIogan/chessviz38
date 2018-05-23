#include <stdio.h>
#include "board.h"
#include "board_print_plain.h"

int main() {

    board *b = new_board();
    print_board(b);
    free(b);
    return 0;
}