#ifndef CHECKERBOARD_H_INCLUDED
#define CHECKERBOARD_H_INCLUDED
#define Board_SIZE 15
#include<stdio.h>
/**棋盘数组*/
char *ChessBoard[Board_SIZE][Board_SIZE];

/**初始化 重置棋盘*/
void InitChessBoard();
/**打印棋盘*/
void PrintBoard();
#endif // CHECKERBOARD_H_INCLUDED
