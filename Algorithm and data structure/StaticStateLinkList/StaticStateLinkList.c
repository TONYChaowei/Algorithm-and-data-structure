#include"StaticStateLinkList.h"
/** ��ʼ����̬����*/
void InitList(StaticLinkList space){
    for(int i = 0; i < MAX_SIZE - 1; i++){
        space[i].cur = i + 1;
        space[MAX_SIZE - 1].cur = 0;   /*����̬����Ϊ��ʱ������һ��Ԫ�ص�curΪ0*/
    }
}
/** �����ÿռ�����ǿգ��򷵻ط���Ľ�� ���±꣬���򷵻�0*/
void Malloc_SSL(StaticLinkList space){
    int i;
    i = space[0].cur;
    if(space[0].cur){
        space[0].cur = space[i],cur;
    }
    return i;
}
/**�������������*/
void InsertElement(StaticLinkList space, int pos, ElementType element){
        int insertNodeIndex;
        int lastNodeIndex;
        int currNodeIndex;

}
