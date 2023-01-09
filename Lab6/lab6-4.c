#include <stdio.h>
#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    
    int board[BOARD_SIZE][BOARD_SIZE];
    // initialize board
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 0;
        }
    }

    int count;
    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        int x, y;
        char piece;
        scanf("\n%c(%d, %d)", &piece, &x, &y);  
        setPieceOnTable(board, piece, x, y);
    }

    puts("------------------");
    puts("  0 1 2 3 4 5 6 7");
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for(int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == 0)
                printf(" |", board[i][j]);
            else
                printf("%c|", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos) {
    board[yPos][xPos] = piece;
}