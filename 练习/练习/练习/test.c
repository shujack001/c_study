#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.��ʼ��Ϸ 0.������Ϸ****\n");
	printf("******************************\n");
	printf("������\n");	
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		Computermove(board, ROW, COL);
		Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);

}
	if (ret = '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}