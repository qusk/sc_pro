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
	char question[50]; // ����
	char *number[4];	   // ������
	int answer;        // ���� �Է�
	BOOL already_Qu;    // �̹� ������ ���� ����
} Question;

void game_main();

void gotoxy(int x, int y);

void gotoxy(int x, int y) {
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


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

Question QuestionData[] = {
	{"����μ����� �ҼӵǾ��ִ� �౸�� ����ΰ�?", "����Ǯ", "��Ʈ��", "ç��", "�ƽ���", 2, FALSE},
	{"�ѳ����� ������ �����ΰ�?", "���೪��", "��ǳ����", "�ҳ���", "���ɳ���", 3, FALSE},
	{"�ѳ����� ��¡ ������ �����ΰ�?", "Ȳ�ݵ�����", "������", "��Ӹ�������", "��", 1, FALSE},
	{"C�� ������ ����� �����ΰ�?", "�� ������", "��Ƽ�� ���ʹ���", "��ũ ��Ŀ����", "���Ͻ� ��ġ", 1, FALSE},
	{"���� ���ѹα��� ����� �����ΰ�?", "������", "�̸��", "�ڱ���", "��ö��", 1, FALSE},
	{"���ֵ��� �ִ� �� �����ΰ�?", "�Ѷ��", "��λ�", "���ǻ�", "���ѻ�", 1, FALSE},
	{"���ڵ� ������ �ƴ� �� �����ΰ�?", "WOW", "������ġ", "��ƺ��", "���׿��극����", 4, FALSE},
	{"������ �ƴѰ� �����ΰ�?", "���", "��", "��", "����", 4, FALSE},
	{"��ǻ�;� �ƴ� �� �����ΰ�?", "C���", "JAVA", "GO", "Jang���", 4, FALSE},
	{"���ѹα��� �ִ� ���� �ƴ� �� �����ΰ�?", "�Ѱ�", "���ϰ�", "�ݰ�", "������", 2, FALSE},
	{"�̱��� ������ �����ΰ�?", "����", "�ػ罺", "LA", "������", 4, FALSE},
	{"������ ������ �����ΰ�?", "����", "����", "��ü����", "���־�", 2, FALSE},
	{"�����ô��� ���� �ƴ� ����� �����ΰ�?", "����", "����", "����", "����", 3, FALSE},
	{"�����ô� �ι��� �ƴ� ����� �����ΰ�?", "������", "�̼���", "������", "��Ȳ", 1, FALSE},
	{"12�� 25���� ���� ���ΰ�?", "�����ε���", "ũ��������", "����", "��Ȱ��", 2, FALSE}
};


int main(void) {
	
	int num;        
	int FinNum;					   // ���� ����
	char player_name[100];         // �̸�
	int door_ans;                  // ���� �Ա� ���� 1
	int x = 1;                     // while�� ����
	int AnswerNum;				   			
	int Qu_answer;				   // ���� ���� ����
	int score;					   // ���� ���� ����
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
			printf("������ ���۵˴ϴ�.");
			Sleep(1000);
			cls;

			// �÷��̾� �̸� ���ϱ�
			printf("�÷��̾��� �̸��� �����ּ��� : ");
			scanf_s("%s", &player_name, 100);


			// ���� ����
			printf("%s��! ���� �� ��� ���� ���� ȯ���մϴ�!!\n", player_name);
			Sleep(1500);
			printf("������ ���۵ǰ� �ִ� ���Դϴ�. \n");
			Sleep(500);
			printf("  ��ø� ��ٷ� �ּ���.");
			cls;

//===============================================================================================
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

			printf("������������������������������������������������\n");
			printf("��                                            ��\n");
			printf("��       �˸��ٹٿ� 40���� ���Ͽ���           ��\n");
			printf("��  �˸��ٹٰ��������� ���� �� ��ġ�� ����?   ��\n");
			printf("��                                            ��\n");
			printf("��               1. ������ ��                 ��\n");
			printf("��               2. ������ ����               ��\n");
			printf("��               3. ������ ��                 ��\n");
			printf("������������������������������������������������\n");

			printf("\n");

			printf("�´� ��ȣ�� ���� �Ǵ°ǰ�?\n\n");
			printf("��ȣ�� ���ͽÿ� :");

			
			
			while (x) {
				scanf("%d", &door_ans);
				if (door_ans == 2) {
					Sleep(2000);
					printf("���� ���� ������ �־�!");
					Sleep(1000);
					printf("������ ����");
					Sleep(2000);
					x = 0;
					break;
				}
				else {
					Sleep(1000);
					printf("���� ������ �ʱ�...");
					Sleep(1500);
				}
			}
			
			


			// ���� ����
			cls;
			printf("���Ⱑ ������ �ִ� �����ΰ�?\n");
			Sleep(1500);
			printf("���� ������\n");
			Sleep(2000);

			middle:;

			cls;
			printf("??? : �����!\n ���谡��\n");
			Sleep(1500);
			printf("??? : ���� ���� �����濡 ������ �ϴ°�?\n");
			Sleep(1000);
			printf("��������?\n");
			Sleep(1500);
			printf("��ȣ�� : ���� �� �������� ��Ű�� ��ȣ�ڴ�.\n");
			Sleep(1500);
			printf("���� �� ������ �ִ� ������ ������ �Դ�.\n");
			Sleep(1500);
			printf("��ȣ�� : ���� �ִµ��� �׷� �б⸦ ������ �ִٴ�...\n ������\n");
			Sleep(1500);
			printf("��ȣ�� : ������, ������ ������ ������ �Ѱ��� ������ �ִ�...\n");
			Sleep(1500);
			printf("������ ����?\n");
			Sleep(1500);
			printf("��ȣ�� : ���� ���� �������� 5���̻� ���߸� �����ְڴ�...\n");
			Sleep(1500);
			printf("����\n");
			Sleep(1500);
			printf("��ȣ�� : ����... �׷� �����Ѵ�. ");
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

				printf("\n4���� ��ȣ �� ������ �����ϼ��� ; ");

				c = _getch();
				c = c - 0x30;

				if (c == QuestionData[AnswerNum].answer) {
					printf("\n�����̴� ���谡��\n");
					score++;
				}
				else {
					printf("\n�����̴� ���谡��\n");
				}
				Sleep(1000);


				if (4 < score) {
					printf("������ 5���̻� ���豸�� ���谡��\n");
					Sleep(1500);
				}
				else {
					printf("������ 5���̻� ������ ���߱���.\n");
					Sleep(1500);
					printf("�׾��!!!");
					Sleep(2000);
					printf("Ŭ��� �����ϼ̽��ϴ�.\n");
					Sleep(500);
					printf("�ٽ� �Ͻðڽ��ϱ�?");
					printf("1. �ٽ� ����(���� Ǯ�� ������ �̵�) 2. ��������");
					scanf("%d", &restart);

					if (restart == 1) {
						goto middle;
					}
					else if (restart == 2) {
						num = 2;
					}
				}
			}

			
			
			//���� ������ �κ�
			//==================================================================================
			cls;
			printf("������ �����Ǿ���.\n");
			Sleep(1500);
			printf("�������Ŷ�\n");
			Sleep(1500);

			cls;
			printf("���̽�!!!\n");
			Sleep(1500);
			printf("���� ������ �տ� �־���!!");
			Sleep(1500);

			cls;
			gotoxy(15, 4);
			printf("������ �տ� �־����ϴ�.\n");
			Sleep(1000);
			gotoxy(15, 5);
			printf("������ Ŭ�����ϼ̽��ϴ�.\n");
			Sleep(1000);
			gotoxy(15, 6);
			printf("������ �����մϴ�.");
			
		case 2:
			printf("������ ������ �����ϰڽ��ϱ�?(�ٸ� ���ڸ� �Է��� �� ������ �߻� �� �� ����)\n");
			printf("���� : 1\n");
			printf("����ȭ������ ���ư��� : 2\n");
			scanf_s("%d", &FinNum);
			
			if (FinNum == 1) {
				printf("������ ����Ǿ����ϴ�.");
			}
			else if (FinNum == 2) {
				goto start;							// start�������� ���ư�
				cls;
			}
			else {
				printf("������ �߻��Ͽ��� ������ �����ŵ�ϴ�.");
			}
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			printf("������ �����մϴ�.");
			num = 2;
			break;
		}
		break;
	}
	return 0;
}



