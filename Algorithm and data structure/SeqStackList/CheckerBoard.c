#include"CheckerBoard.h"
/**初始化 重置棋盘*/
void InitChessBoard(){
    for(int i = 0; i < Board_SIZE; i++){
        for(int j =0 ; j < Board_SIZE; j++){
               ChessBoard[i][j] = "十";
        }
    }
}
/**打印棋盘*/
void PrintBoard(){
  for(int i = 0; i < Board_SIZE; i++){
    for(int j =0 ; j < Board_SIZE; j++){
               printf("%s",ChessBoard[i][j]);
        }
        printf("\n");
    }

}
