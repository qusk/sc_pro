#include <stdio.h>

#include <windows.h>

#define cls	system("cls");

typedef
struct {
	char question[50]; // ����
	char number[4];	   // ������
	int answer;        // ���� �Է�
} Question;

void game_main();

void game_main() {

	printf("��������������������������\n");
	printf("��                                              ��\n");
	printf("��                                              ��\n");
	printf("��                                              ��\n");
	printf("��                 ���� �� ����                 ��\n");
	printf("��                                              ��\n");
	printf("��                                              ��\n");
	printf("��                                              ��\n");
	printf("��������������������������");
	printf("\n\n\n");

	printf("1.���� ����\n");
	printf("2.���� ����\n");
	printf("�Է��ϼ���(1(����) or 2(����)) >> ");

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
			printf("������ ���۵˴ϴ�.");
			break;
		
		case 2: 
			printf("������ �����Ͽ����ϴ�.");
			break;
		
	}
	cls;

	// ���� ����

	printf("�÷��̾��� �̸��� �����ּ��� : ");
	scanf_s("%s", &player_name, 100);

	printf("%s��! ���� �� ��� ���� ���� ȯ���մϴ�!!\n", player_name);
	Sleep(1500);
	printf("�� ������ �־��� ����� ���� Ǯ��� �͡��� Ŭ���� �����Դϴ�.\n");
	Sleep(1500);
	printf("�� Ŭ�����ϼ���!!");
	
	// ���� �κ�
	// ����


	// ���� ���� ���� ����

	// ���� ��
	return 0;
}