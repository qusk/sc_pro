#include <stdio.h>
#include <windows.h>

#define cls	system("cls");

typedef 
struct {
	char job[20];   // �����̸�
	int level;
	int health;		// ü��
	int attack;		// ���ݷ�
	int defend;		// ����
}INFORMATION;



void game_main();

void print_job(INFORMATION);

void game_main() {
	printf("=========������Ű�� ����=========\n");
	printf("\n");
	printf("\n");
	printf("1.���� ���� \n");
	printf("2.���� ���� \n\n");
	printf("�Է��ϼ��� :");
}


void print_job(INFORMATION info) {
	printf("==[%s]==\n", info.job);
	printf("����: %d", info.level);
	printf("ü��: %d\n", info.health);
	printf("���ݷ�: %d\n", info.attack);
	printf("����: %d\n", info.defend);
}

int main(void) {
	
	game_main();

	// ���� ����
	int num;
	INFORMATION job[3] = { {"����", 100, 20, 20}, {"�ְ˻�",75, 35, 5}, {"���а˻�", 150, 10, 20} };
	scanf_s("%d", &num);
	switch (num)
	{
	case 1:
	{
		cls;
		printf("������ �����ϰڽ��ϴ�.");
		Sleep(1000);
		cls;
		int select;
		printf("===������ �����Ͻʽÿ�===");
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
				printf("���縦 �����ϼ̽��ϴ�");
				break;
			}
			case 2: 
			{
				cls;
				printf("�ְ˻縦 �����ϼ̽��ϴ�.");
				break;
			}
			case 3: 
			{
				cls;
				printf("���а˻縦 �����ϼ̽��ϴ�.");
				break;
			}
			default:
				printf("������ �߻��߽��ϴ�.\n ������ �����մϴ�.");
				break;
		}
		break;
	}
	case 2:
	{
		cls;
		printf("������ �����մϴ�.\n");
		break;
	}
	default:
		break;
	}
	
	// ����

	printf("===================================");
	printf("")
	return 0;
}