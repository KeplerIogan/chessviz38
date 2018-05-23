#include <stdio.h>
#include <stddef.h>
#include "board.h"

//создаём структурный массив

int new_board() {

    short i = 9, j = 9, k, l;

    board b[i][j];
    

        b[1][1].num = 1;
    b[1][1].name = 'L';
    b[1][1].colore = 1;
        b[1][2].num = 1;
    b[1][2].name = 'H';
    b[1][2].colore = 1;
        b[1][3].num = 1;
    b[1][3].name = 'C';
    b[1][3].colore = 1;
        b[1][4].num = 1;
    b[1][4].name = 'K';
    b[1][4].colore = 1;
        b[1][5].num = 1;
    b[1][5].name = 'F';
    b[1][5].colore = 1;
        b[1][6].num = 1;
    b[1][6].name = 'C';
    b[1][6].colore = 1;
        b[1][7].num = 1;
    b[1][7].name = 'H';
    b[1][7].colore = 1;
        b[1][8].num = 1;
    b[1][8].name = 'L';
    b[1][8].colore = 2;
        b[8][1].num = 1;
    b[8][1].name = 'L';
    b[8][1].colore = 2;
        b[8][2].num = 1; //10
    b[8][2].name = 'H';
    b[8][2].colore = 2;
        b[8][3].num = 1;
    b[8][3].name = 'C';
    b[8][3].colore = 2;
        b[8][4].num = 1;
    b[8][4].name = 'F';
    b[8][4].colore = 2;
        b[8][5].num = 1;
    b[8][5].name = 'K';
    b[8][5].colore = 2;
        b[8][6].num = 1;
    b[8][6].name = 'C';
    b[8][6].colore = 2;
        b[8][7].num = 1;
    b[8][7].name = 'H';
    b[8][7].colore = 2;
        b[8][8].num = 1;
    b[8][8].name = 'L';
    b[8][8].colore = 2;
    for(k = 0; k < j; k++) {
            b[2][k].num = 1;
        b[2][k].name = 'P';
        b[2][k].colore = 1;
    }
    
    for(k = 1; k < j; k++) {
            b[7][k].num = 1;
        b[7][k].name = 'P';
        b[7][k].colore = 2;
    }
    for(k = 3; k < 7; k++) {
        for(l = 1; l < 9; l++) {
            b[k][l].name = ' ';
            b[k][l].num = 0;
            b[k][l].colore = 0;
        }
    }
    /*
    for(k = 1; k < i; k++) {
        for(l = 1; l < j; l++) {
            printf("%c", b[k][l].name);
        }
        printf("\n");
    }
    */
    return b;
}
