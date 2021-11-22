#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

#define cls	system("cls");

typedef
struct {
	char question[50]; // 문제
	char *number[4];	   // 객관식
	int answer;        // 정답 입력
	BOOL already_Qu;    // 이미 출제된 문제 방지
} Question;

void game_main();

void gotoxy(int x, int y);

void gotoxy(int x, int y) {
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


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

Question QuestionData[] = {
	{"손흥민선수가 소속되어있는 축구팀 어디인가?", "리버풀", "토트넘", "챌시", "아스널", 2, FALSE},
	{"한남대의 교목은 무엇인가?", "은행나무", "단풍나무", "소나무", "벗꽃나무", 3, FALSE},
	{"한남대의 상징 동물은 무엇인가?", "황금독수리", "독수리", "대머리독수리", "매", 1, FALSE},
	{"C언어를 개발한 사람은 누구인가?", "빌 게이츠", "스티븐 스필버그", "마크 저커버그", "데니스 리치", 1, FALSE},
	{"현재 대한민국의 대통령 누구인가?", "문재인", "이명박", "박근혜", "안철수", 1, FALSE},
	{"제주도에 있는 산 무엇인가?", "한라산", "백두산", "설악산", "북한산", 1, FALSE},
	{"블리자드 게임이 아닌 것 무엇인가?", "WOW", "오버워치", "디아블로", "리그오브레전드", 4, FALSE},
	{"과일이 아닌것 무엇인가?", "사과", "감", "배", "딸기", 4, FALSE},
	{"컴퓨터언어가 아닌 것 무엇인가?", "C언어", "JAVA", "GO", "Jang언어", 4, FALSE},
	{"대한민국에 있는 강이 아닌 것 무엇인가?", "한강", "나일강", "금강", "섬진강", 2, FALSE},
	{"미국의 수도는 무엇인가?", "뉴욕", "텍사스", "LA", "워싱턴", 4, FALSE},
	{"영국의 수도는 무엇인가?", "리즈", "런던", "맨체스터", "버밍엄", 2, FALSE},
	{"조선시대의 왕이 아닌 사람은 누구인가?", "세종", "고종", "광종", "단종", 3, FALSE},
	{"조선시대 인물이 아닌 사람은 누구인가?", "김유신", "이순신", "유성룡", "이황", 1, FALSE},
	{"12월 25일은 무슨 날인가?", "빼뺴로데이", "크리스마스", "설날", "부활절", 2, FALSE}
};


int main(void) {
	
	int num;        
	int FinNum;					   // 종료 변수
	char player_name[100];         // 이름
	int door_ans;                  // 동굴 입구 정답 1
	int x = 1;                     // while문 변수
	int AnswerNum;				   			
	int Qu_answer;				   // 문제 정답 제출
	int score;					   // 정답 맞춘 갯수
	int restart;
	char c;

	start:;
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
			printf("게임이 시작되고 있는 중입니다. \n");
			Sleep(500);
			printf("  잠시만 기다려 주세요.");
			cls;

//===============================================================================================
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

			printf("┌──────────────────────┐\n");
			printf("│                                            │\n");
			printf("│       알리바바와 40인의 도둑에서           │\n");
			printf("│  알리바바가동굴에서 나올 때 외치는 말은?   │\n");
			printf("│                                            │\n");
			printf("│               1. 열려라 문                 │\n");
			printf("│               2. 열려라 참꺠               │\n");
			printf("│               3. 열려라 들                 │\n");
			printf("└──────────────────────┘\n");

			printf("\n");

			printf("맞는 번호를 고르면 되는건가?\n\n");
			printf("번호를 고르싶시오 :");

			
			
			while (x) {
				scanf("%d", &door_ans);
				if (door_ans == 2) {
					Sleep(2000);
					printf("동굴 문이 열리고 있어!");
					Sleep(1000);
					printf("앞으로 가자");
					Sleep(2000);
					x = 0;
					break;
				}
				else {
					Sleep(1000);
					printf("문이 열리지 않군...");
					Sleep(1500);
				}
			}
			
			


			// 동굴 안쪽
			cls;
			printf("저기가 보물이 있는 안쪽인가?\n");
			Sleep(1500);
			printf("빨리 가보자\n");
			Sleep(2000);

			middle:;

			cls;
			printf("??? : 멈춰라!\n 모험가여\n");
			Sleep(1500);
			printf("??? : 누가 감히 보물방에 들어갈려고 하는가?\n");
			Sleep(1000);
			printf("누구세요?\n");
			Sleep(1500);
			printf("수호자 : 나는 이 보물방을 지키는 수호자다.\n");
			Sleep(1500);
			printf("나는 이 동굴에 있는 보물을 가지러 왔다.\n");
			Sleep(1500);
			printf("수호자 : 내가 있는데도 그런 패기를 가지고 있다니...\n 좋구나\n");
			Sleep(1500);
			printf("수호자 : 하지만, 보물을 가지고 가려면 한가지 조건이 있다...\n");
			Sleep(1500);
			printf("조건이 뭐지?\n");
			Sleep(1500);
			printf("수호자 : 내가 내는 문제에서 5개이상만 맞추면 비켜주겠다...\n");
			Sleep(1500);
			printf("좋아\n");
			Sleep(1500);
			printf("수호자 : 좋다... 그럼 시작한다. ");
			Sleep(5000);

			srand((unsigned)time(NULL));

			for (Qu_answer = 0; Qu_answer < 5; Qu_answer++) {
				do {
					AnswerNum = rand() % (sizeof(QuestionData) / sizeof(QuestionData[0]));

				} while (QuestionData[AnswerNum].already_Qu == TRUE);
				QuestionData[AnswerNum].already_Qu = TRUE;

				cls;

				gotoxy(15, 2);
				printf("%s", QuestionData[AnswerNum].question);
				for (int i = 0; i < 4; i++) {
					gotoxy(15, 5 * i + 4);
					printf("%d %s", i + 1, QuestionData[AnswerNum].number[i]);
				}

				printf("\n4개의 번호 중 정답을 선택하세요 ; ");

				c = _getch();
				c = c - 0x30;

				if (c == QuestionData[AnswerNum].answer) {
					printf("\n정답이다 모험가여\n");
					score++;
				}
				else {
					printf("\n오답이다 모험가여\n");
				}
				Sleep(1000);


				if (4 < score) {
					printf("문제를 5개이상 맞췄구나 모험가여\n");
					Sleep(1500);
				}
				else {
					printf("문제를 5개이상 맞추지 못했구나.\n");
					Sleep(1500);
					printf("죽어라!!!");
					Sleep(2000);
					printf("클리어에 실패하셨습니다.\n");
					Sleep(500);
					printf("다시 하시겠습니까?");
					printf("1. 다시 시작(문제 풀기 전으로 이동) 2. 게임종료");
					scanf("%d", &restart);

					if (restart == 1) {
						goto middle;
					}
					else if (restart == 2) {
						num = 2;
					}
				}
			}

			
			
			//게임 마지막 부분
			//==================================================================================
			cls;
			printf("조건은 성립되었다.\n");
			Sleep(1500);
			printf("지나가거라\n");
			Sleep(1500);

			cls;
			printf("나이스!!!\n");
			Sleep(1500);
			printf("드디어 보물을 손에 넣었다!!");
			Sleep(1500);

			cls;
			gotoxy(15, 4);
			printf("보물을 손에 넣었습니다.\n");
			Sleep(1000);
			gotoxy(15, 5);
			printf("게임을 클리어하셨습니다.\n");
			Sleep(1000);
			gotoxy(15, 6);
			printf("게임을 종료합니다.");
			
		case 2:
			printf("정말로 게임을 종료하겠습니까?(다른 숫자를 입력할 시 오류가 발생 할 수 있음)\n");
			printf("종료 : 1\n");
			printf("메인화면으로 돌아가기 : 2\n");
			scanf_s("%d", &FinNum);
			
			if (FinNum == 1) {
				printf("게임이 종료되었습니다.");
			}
			else if (FinNum == 2) {
				goto start;							// start지점으로 돌아감
				cls;
			}
			else {
				printf("오류가 발생하여서 게임을 종료시킵니다.");
			}
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			printf("게임을 종료합니다.");
			num = 2;
			break;
		}
		break;
	}
	return 0;
}



