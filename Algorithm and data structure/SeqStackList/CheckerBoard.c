#include"CheckerBoard.h"
/**��ʼ�� ��������*/
void InitChessBoard(){
    for(int i = 0; i < Board_SIZE; i++){
        for(int j =0 ; j < Board_SIZE; j++){
               ChessBoard[i][j] = "ʮ";
        }
    }
}
/**��ӡ����*/
void PrintBoard(){
  for(int i = 0; i < Board_SIZE; i++){
    for(int j =0 ; j < Board_SIZE; j++){
               printf("%s",ChessBoard[i][j]);
        }
        printf("\n");
    }

}
