#ifndef CHECKERBOARD_H_INCLUDED
#define CHECKERBOARD_H_INCLUDED
#define Board_SIZE 15
#include<stdio.h>
/**��������*/
char *ChessBoard[Board_SIZE][Board_SIZE];

/**��ʼ�� ��������*/
void InitChessBoard();
/**��ӡ����*/
void PrintBoard();
#endif // CHECKERBOARD_H_INCLUDED
