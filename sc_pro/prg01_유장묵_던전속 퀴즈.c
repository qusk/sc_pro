#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	
	int num;                       
	char player_name[100];         // �̸�
	char ans_1[20];                // ���� �Ա� ���� 1
	int x = 1;                     // while�� ����

	game_main();


	scanf_s("%d", &num);
	while (x) {
		switch (num)
		{
		case 1:
			cls;
			printf("\n\n\n\n");
			printf("������ ���۵˴ϴ�.");
			Sleep(1000);
			cls;

			// �÷��̾� �̸� ���ϱ�
			printf("�÷��̾��� �̸��� �����ּ��� : ");
			scanf_s("%s", &player_name, 100);


			// ���� ����
			printf("%s��! ���� �� ��� ���� ���� ȯ���մϴ�!!\n", player_name);
			Sleep(1500);
			printf("�� ������ �־��� ����� ���� Ǯ��� �͡��� Ŭ���� �����Դϴ�.\n");
			Sleep(1500);
			printf("�� Ŭ�����Ͻñ�ٶ��ϴ�!!");
			Sleep(1000);
			cls;


			// ���� �κ�
			// �����Ա� 

			Sleep(1000);

			printf("                                                                    \n");
			printf("                             �����                               \n");
			printf("                           ��        ��                             \n");
			printf("                         ��            ��                           \n");
			printf("                       ��                ��                         \n");
			printf("                      ��                  ��                        \n");
			printf("                     ��                    ��                       \n");
			printf("                     ��                    ��                       \n");
			printf("                    ��                      ��                      \n");
			printf("                    ��                      ��                      \n");
			printf("    �����        ��                      ��                            \n");
			printf("    ��    ��       ��                        ��                           \n");
			printf("    �����       ��                        ��                           \n");
			printf("                   ��                        ��                           \n");
			printf("                   ��                        ��                           \n");



			printf("\n\n\n");



			Sleep(1000);
			printf("==================================================================\n");
			printf("���Ⱑ ��û�� ������ �����ִٴ� �����ΰ�?\n");
			Sleep(1000);
			printf("���� �Ա��� �������ݾ�!\n");
			Sleep(1000);
			printf("���� ���� ������ ���� �ִµ�?\n");
			Sleep(2000);
			cls;

			Sleep(1000);

			printf("��������������������������������������\n");
			printf("��                ��                ��\n");
			printf("��   ��������     ��  �� ��ġ�ÿ�   ��\n");
			printf("��                ��                ��\n");
			printf("��������������������������������������\n");

			printf("\n\n");

			printf("���� ��ġ�� ������ ������ �ǰ�?\n\n");
			printf("��ĥ ���� �Է��Ͻʽÿ�(����x) :");

			scanf("%s", ans_1);
			
			while (x) {
				if (strcmp(ans_1, "������") == 0) {
					printf("%s\n", ans_1);
					Sleep(2000);
					printf("���� ���� ������ �־�!");
					x = 0;
					break;
				}
				else {
					Sleep(1000);
					printf("���� ������ �ʱ�...");
					break;
				}
			}




























		case 2:
			printf("������ �����Ͽ����ϴ�.");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			printf("������ �����մϴ�.");
			num = 2;
			break;
		}
		break;
	}
	

	
	
	// ���� ����
	
	




	
	// ���� ���� ���� ����

	// ���� ��
	return 0;
}