#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.��ʼ��Ϸ 0.������Ϸ****\n");
	printf("******************************\n");

}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board,ROW,COL);
	Displayboard(board, ROW, COL);
	while (1)	
	{
		Playermove(board, ROW, COL);
	    ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int intput = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &intput);
		switch(intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("׼���˳�\n");
				break;
		default:
			printf("����������������롣\n");
		}
	} while (intput);
	return 0;
}