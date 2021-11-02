#include <stdio.h>

#include <windows.h>

#define cls	system("cls");

typedef
struct {
	char question[50]; // 문제
	char number[4];	   // 객관식
	int answer;        // 정답 입력
} Question;

void game_main();

void game_main() {

	printf("■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("■                                              ■\n");
	printf("■                                              ■\n");
	printf("■                                              ■\n");
	printf("■                 던전 속 퀴즈                 ■\n");
	printf("■                                              ■\n");
	printf("■                                              ■\n");
	printf("■                                              ■\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
	printf("\n\n\n");

	printf("1.게임 시작\n");
	printf("2.게임 종료\n");
	printf("입력하세요(1(시작) or 2(종료)) >> ");

}


int main(void) {
	

	game_main();


	int num;
	char player_name[100];
	

	scanf_s("%d", &num);
	switch (num) 
	{
		case 1: 
			cls;
			printf("\n\n\n\n");
			printf("게임이 시작됩니다.");
			break;
		
		case 2: 
			printf("게임을 종료하였습니다.");
			break;
		
	}
	cls;

	// 게임 시작

	printf("플레이어의 이름을 정해주세요 : ");
	scanf_s("%s", &player_name, 100);

	printf("%s님! 던전 속 퀴즈에 오신 것을 환영합니다!!\n", player_name);
	Sleep(1500);
	printf("이 게임은 주어진 ☆퀴즈를 전부 풀어내는 것☆이 클리어 조건입니다.\n");
	Sleep(1500);
	printf("꼭 클리어하세요!!");
	
	// 게임 부분
	// 동굴


	// 동굴 내부 던전 주인

	// 게임 끝
	return 0;
}