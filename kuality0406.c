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
	printf("오늘 번 돈은 %d원입니다", earned_money);
}
void buyable_beverage(void) {
	if (insert_money >= 900) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| [콜라]    [사이다]      [환타]       [매실]     [물] |\n");
		printf("|  800        800          900          700       500  |\n");
	}
	else if (insert_money >= 800) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| [콜라]    [사이다]       환타        [매실]     [물] |\n");
		printf("|  800        800        잔액부족       700       500  |\n");
	}
	else if (insert_money >= 700) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("|  콜라      사이다        환타       [매실]      [물] |\n");
		printf("| 잔액부족  잔액부족     잔액부족       700       500 |\n");
	}
	else if (insert_money >= 500) {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| 콜라       사이다        환타         매실      [물] |\n");
		printf("|잔액부족   잔액부족     잔액부족     잔액부족    500  |\n");
	}
	else {
		printf("-------------------------BEVERAGE----------------------\n");
		printf("| 콜라       사이다        환타         매실        물 |\n");
		printf("|잔액부족   잔액부족     잔액부족     잔액부족 잔액부족|\n");
	}
}
int main() {
	printf("돈을 넣어주세요 >> ");
	scanf(" %d", &insert_money);

	buyable_beverage();
	re_choose:
	printf("음료를 선택해주세요 >> ");
	scanf(" %s", &chosen_beverage);
	yesno = 'Y';
	while (yesno == 'Y') {
		if (strcmp(chosen_beverage, "콜라") == 0 && b1 > 0) {
			printf("거스름돈 %d원입니다\n", insert_money - 800);
			insert_money -= 800;
			earned_money += 800;
			b1 -= 1;
			
		}
		else if (strcmp(chosen_beverage, "사이다") == 0 && b2 > 0) {
			printf("거스름돈 %d원입니다\n", insert_money - 800);
			insert_money -= 800;
			earned_money += 800;
			b2 -= 1;
		}
		else if (strcmp(chosen_beverage, "환타") == 0 && b3 > 0) {
			printf("거스름돈 %d원입니다\n", insert_money - 900);
			insert_money -= 900;
			earned_money += 900;
			b3 -= 1;
		}
		else if (strcmp(chosen_beverage, "매실") == 0 && b4 > 0) {
			printf("거스름돈 %d원입니다\n", insert_money - 700);
			insert_money -= 700;
			earned_money += 700;
			b4 -= 1;
		}//strcmp
		else if (strcmp(chosen_beverage, "물") == 0 && b5 > 0) {
			printf("거스름돈 %d원입니다\n", insert_money - 500);
			insert_money -= 500;
			earned_money += 500;
			b5 -= 1;
		}
		else {
			printf("잘못된 입력값입니다. 올바른 입력값을 입력해주세요");
			goto re_choose;
		}
		printf("더 구매하시겠습니까?");
		scanf(" %c", &yesno);
	}
	printf("이용해주셔서 감사합니다");
}