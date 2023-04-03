// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

void print_title_Screen()
{
	std::cout << "************************************" << std::endl;
	std::cout << "*                                  *" << std::endl;
	std::cout << "*                                  *" << std::endl;
	std::cout << "*            지렁이 게임           *" << std::endl;
	std::cout << "*          ( snake bite )          *" << std::endl;
	
	#ifdef DEBUG std::cout << "*           -디버그 모드-         *"<< std::endl;
	#else std::cout << "*                                    *   "<<std::endl;
	#endif 
		std::cout << "*   1.게임시작                     *" << std::endl;
		std::cout << "*   2.게임설명                     *" << std::endl;
		std::cout << "*   3.게임 랭킹 보기               *" << std::endl;
		std::cout << "*   4.게임 종료                    *" << std::endl;
}
//gameState 2번은 게임설명 
void print_intro_Screen()
{
	std::cout << "*********************************)" << std::endl;
	std::cout << "타이틀 화면으로 돌아갈까요(y / n)" << std::endl;
	
}
int main()
{
		int gameState = 0;
		int is_game_running = 1;

	while (is_game_running) {
		print_title_Screen();

		char key_input = 0;
		key_input = getch();
		switch (gameState)
		{
		case 0: print_title_Screen();
			switch (key_input)
			{
			case '1':break;
			case '2':
				gameState = 2;
					break;
			case '3':break;
			case '4':break;
			default:
				break;
			}
		case 2: 
			print_intro_Screen();
			key_input = getch();
			switch (key_input)
			{
			case 'y':
				gameState = 0;
				break;
			case 'n':
				break;
			break;
		case 4:
			is_game_running = 0;
			break;
		case 27:
			break;
		default:break;
		}

	}
	while (true)
	{
		int a = _getch();
		if (a == 27 || a == '4') break;
		if (a == '2') {
			print_intro_Screen();
		}
	}
		
}
	//함수 만들고 리턴값 게임스테이트로 받아서 코드 단순화 하기 
