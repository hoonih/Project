#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <time.h> 

void gotoxy(int x, int y) {
    //x, y ��ǥ ����
    COORD pos = { x,y };
    //Ŀ�� �̵�
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    printf("�����ٶ󸶹ٻ�");
    gotoxy(1, 0);

    printf("��");

}