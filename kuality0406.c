#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int insert_money;
int earned_money = 0;
char yesno;
char chosen_beverage[4];
int num;
int b1 = 4, b2 = 5, b3 = 3, b4 = 2, b5 = 5;
#include <string.h>
#include <stdio.h>
void show_earned_money(void) {
	printf("���� �� ���� %d���Դϴ�", earned_money);
}
void buyable_beverage(void) {
	if (insert_money >= 900) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| [�ݶ�]    [���̴�]      [ȯŸ]       [�Ž�]     [��] |\n");
		printf("|  800        800          900          700       500  |\n");
	}
	else if (insert_money >= 800) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| [�ݶ�]    [���̴�]       ȯŸ        [�Ž�]     [��] |\n");
		printf("|  800        800        �ܾ׺���       700       500  |\n");
	}
	else if (insert_money >= 700) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("|  �ݶ�      ���̴�        ȯŸ       [�Ž�]      [��] |\n");
		printf("| �ܾ׺���  �ܾ׺���     �ܾ׺���       700       500 |\n");
	}
	else if (insert_money >= 500) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| �ݶ�       ���̴�        ȯŸ         �Ž�      [��] |\n");
		printf("|�ܾ׺���   �ܾ׺���     �ܾ׺���     �ܾ׺���    500  |\n");
	}
	else {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| �ݶ�       ���̴�        ȯŸ         �Ž�        �� |\n");
		printf("|�ܾ׺���   �ܾ׺���     �ܾ׺���     �ܾ׺��� �ܾ׺���|\n");
	}
}
int main() {
	printf("���� �־��ּ��� >> ");
	scanf(" %d", &insert_money);

	buyable_beverage();
	re_choose:
	printf("���Ḧ �������ּ��� >> ");
	scanf(" %s", &chosen_beverage);
	yesno = 'Y';
	while (yesno == 'Y') {
		if (strcmp(chosen_beverage, "�ݶ�") == 0 && b1 > 0) {
			printf("�Ž����� %d���Դϴ�\n", insert_money - 800);
			insert_money -= 800;
			earned_money += 800;
			b1 -= 1;
			
		}
		else if (strcmp(chosen_beverage, "���̴�") == 0 && b2 > 0) {
			printf("�Ž����� %d���Դϴ�\n", insert_money - 800);
			insert_money -= 800;
			earned_money += 800;
			b2 -= 1;
		}
		else if (strcmp(chosen_beverage, "ȯŸ") == 0 && b3 > 0) {
			printf("�Ž����� %d���Դϴ�\n", insert_money - 900);
			insert_money -= 900;
			earned_money += 900;
			b3 -= 1;
		}
		else if (strcmp(chosen_beverage, "�Ž�") == 0 && b4 > 0) {
			printf("�Ž����� %d���Դϴ�\n", insert_money - 700);
			insert_money -= 700;
			earned_money += 700;
			b4 -= 1;
		}//strcmp
		else if (strcmp(chosen_beverage, "��") == 0 && b5 > 0) {
			printf("�Ž����� %d���Դϴ�\n", insert_money - 500);
			insert_money -= 500;
			earned_money += 500;
			b5 -= 1;
		}
		else {
			printf("�߸��� �Է°��Դϴ�. �ùٸ� �Է°��� �Է����ּ���");
			goto re_choose;
		}
		printf("�� �����Ͻðڽ��ϱ�?");
		scanf(" %c", &yesno);
	}
	printf("�̿����ּż� �����մϴ�");
}