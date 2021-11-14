#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	
	int num;                       
	char player_name[100];         // 이름
	char ans_1[20];                // 동굴 입구 정답 1
	int x = 1;                     // while문 변수

	game_main();


	scanf_s("%d", &num);
	while (x) {
		switch (num)
		{
		case 1:
			cls;
			printf("\n\n\n\n");
			printf("게임이 시작됩니다.");
			Sleep(1000);
			cls;

			// 플레이어 이름 정하기
			printf("플레이어의 이름을 정해주세요 : ");
			scanf_s("%s", &player_name, 100);


			// 게임 시작
			printf("%s님! 던전 속 퀴즈에 오신 것을 환영합니다!!\n", player_name);
			Sleep(1500);
			printf("이 게임은 주어진 ☆퀴즈를 전부 풀어내는 것☆이 클리어 조건입니다.\n");
			Sleep(1500);
			printf("꼭 클리어하시길바랍니다!!");
			Sleep(1000);
			cls;


			// 게임 부분
			// 동굴입구 

			Sleep(1000);

			printf("                                                                    \n");
			printf("                             ■■■■                               \n");
			printf("                           ■        ■                             \n");
			printf("                         ■            ■                           \n");
			printf("                       ■                ■                         \n");
			printf("                      ■                  ■                        \n");
			printf("                     ■                    ■                       \n");
			printf("                     ■                    ■                       \n");
			printf("                    ■                      ■                      \n");
			printf("                    ■                      ■                      \n");
			printf("    □□□□        ■                      ■                            \n");
			printf("    □    □       ■                        ■                           \n");
			printf("    □□□□       ■                        ■                           \n");
			printf("                   ■                        ■                           \n");
			printf("                   ■                        ■                           \n");



			printf("\n\n\n");



			Sleep(1000);
			printf("==================================================================\n");
			printf("저기가 엄청난 보물이 묻혀있다는 동굴인가?\n");
			Sleep(1000);
			printf("동굴 입구가 닫혀있잖아!\n");
			Sleep(1000);
			printf("동굴 옆에 뭔가가 적혀 있는데?\n");
			Sleep(2000);
			cls;

			Sleep(1000);

			printf("┌─────────────────┐\n");
			printf("│                │                │\n");
			printf("│   ㅇㄹㄹㅁ     │  를 외치시오   │\n");
			printf("│                │                │\n");
			printf("└─────────────────┘\n");

			printf("\n\n");

			printf("저걸 외치면 동굴이 열리는 건가?\n\n");
			printf("외칠 말을 입력하십시오(띄어쓰기x) :");

			scanf("%s", ans_1);
			
			while (x) {
				if (strcmp(ans_1, "열려라문") == 0) {
					printf("%s\n", ans_1);
					Sleep(2000);
					printf("동굴 문이 열리고 있어!");
					x = 0;
					break;
				}
				else {
					Sleep(1000);
					printf("문이 열리지 않군...");
					break;
				}
			}




























		case 2:
			printf("게임을 종료하였습니다.");
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			printf("게임을 종료합니다.");
			num = 2;
			break;
		}
		break;
	}
	

	
	
	// 게임 시작
	
	




	
	// 동굴 내부 던전 주인

	// 게임 끝
	return 0;
}