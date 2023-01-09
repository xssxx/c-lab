#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if((i+j == row+col) || (i-j == row-col)) {
                board[i][j] = 'X';
            } else {
                board[i][j] = ' ';
            }
        }
    }
    board[row][col] = 'B';
}

int main() {
    int row, col;
    char board[BOARD_SIZE][BOARD_SIZE];

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &row, &col);

    bishopMoves(board, col, row);

    puts("  0 1 2 3 4 5 6 7");
    puts("------------------");
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for(int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");
        printf("------------------");
        printf("\n");
    }

    return 0;
}