//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

manu()
{
	printf("########################\n");
	printf("#####1.play 2.exit######\n");
	printf("########################\n");




}
void game()
{
	char board[ROW][COL];
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);




}
test()
{

	int input = 0;
	do
	{
		manu();

		printf("请选择\n");
		scanf("%d\n", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新选择\n");
			break;



		}






	} while (input);



}
int main()
{
	test();



	return 0;
}