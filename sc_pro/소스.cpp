#include <stdio.h>
#include <windows.h>

#define cls	system("cls");

typedef 
struct {
	char job[20];   // 직업이름
	int level;
	int health;		// 체력
	int attack;		// 공격력
	int defend;		// 방어력
}INFORMATION;



void game_main();

void print_job(INFORMATION);

void game_main() {
	printf("=========마을지키지 게임=========\n");
	printf("\n");
	printf("\n");
	printf("1.게임 시작 \n");
	printf("2.게임 종료 \n\n");
	printf("입력하세요 :");
}


void print_job(INFORMATION info) {
	printf("==[%s]==\n", info.job);
	printf("레벨: %d", info.level);
	printf("체력: %d\n", info.health);
	printf("공격력: %d\n", info.attack);
	printf("방어력: %d\n", info.defend);
}

int main(void) {
	
	game_main();

	// 직업 선택
	int num;
	INFORMATION job[3] = { {"전사", 100, 20, 20}, {"쌍검사",75, 35, 5}, {"방패검사", 150, 10, 20} };
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
	{
		cls;
		printf("게임을 시작하겠습니다.");
		Sleep(1000);
		cls;
		int select;
		printf("===직업을 선택하십시오===");
		printf("\n\n");
		print_job(job[0]);
		printf("\n");
		print_job(job[1]);
		printf("\n");
		print_job(job[2]);
		printf("\n");
		printf(">>");
		scanf_s("%d", &select);
		switch (select) 
		{
			case 1: 
			{
				cls;
				printf("전사를 선택하셨습니다");
				break;
			}
			case 2: 
			{
				cls;
				printf("쌍검사를 선택하셨습니다.");
				break;
			}
			case 3: 
			{
				cls;
				printf("방패검사를 선택하셨습니다.");
				break;
			}
			default:
				printf("오류가 발생했습니다.\n 게임을 종료합니다.");
				break;
		}
		break;
	}
	case 2:
	{
		cls;
		printf("게임을 종료합니다.\n");
		break;
	}
	default:
		break;
	}
	
	// 시작

	printf("===================================");
	printf("")
	return 0;
}