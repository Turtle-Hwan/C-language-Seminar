#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct _body{
	int health;
	int power;
	float attack_speed;
};

void set_state(struct _body *a);
void fight_simul(struct _body a, struct _body b);


int main() {
	_body A, B;
	
	srand(time(NULL));		//렌덤 시드 초기화

	set_state(&A);
	set_state(&B);
	
	printf("체력, 공격력, 공격속도\n");
	printf("A: %d %d %f\n", A.health, A.power, A.attack_speed);
	printf("B: %d %d %f\n\n", B.health, B.power, B.attack_speed);

	fight_simul(A, B);
}

void set_state(struct _body *a) {
	a->health = 80 + rand() % 41;						//80~120 사이의 체력
	a->power = 5 + rand() % 11;							//5~15 사이의 공격력
	a->attack_speed = 1.0 + (float) (rand() % 11) / 10;	//1.0~2.0 사이의 공격속도
}

void fight_simul(struct _body a, struct _body b) {
	float extraAttack_speed = 0;
	int i = 0;

	if (a.attack_speed >= b.attack_speed) {
		while (1) {
			if (b.health <= 0 || a.health <= 0) {			//둘 중 하나의 체력이 0 이하면 끝
				if (a.health <= 0 && b.health > 0)
					printf("B 승리!");
				else if (b.health <= 0 && a.health > 0)
					printf("A 승리!");
				else
					printf("무승부!");
				break;
			}

			b.health = b.health - a.power;
			a.health = a.health - b.power;

			printf("<%d회차>\n", i);

			extraAttack_speed = extraAttack_speed + a.attack_speed - b.attack_speed;	//공격속도 차이에 따른 추가타
			if (extraAttack_speed >= b.attack_speed) {
				b.health = b.health - a.power;
				extraAttack_speed = extraAttack_speed - b.attack_speed;
				printf("A 추가타!\n");
			}

			printf("A체력: %d, B체력: %d\n\n", a.health, b.health);
			i++;
		}
	}
	else {
		while (1) {
			if (b.health <= 0 || a.health <= 0) {		//둘 중 하나의 체력이 0 이하면 끝
				if (a.health <= 0 && b.health > 0)
					printf("B 승리!");
				else if (b.health <= 0 && a.health > 0)
					printf("A 승리!");
				else
					printf("무승부!");
				break;
			}

			a.health = a.health - b.power;
			b.health = b.health - a.power;

			printf("<%d회차>\n", i);

			extraAttack_speed = extraAttack_speed + b.attack_speed - a.attack_speed;	//공격속도 차이에 따른 추가타
			if (extraAttack_speed >= a.attack_speed) {
				a.health = a.health - b.power;
				extraAttack_speed = extraAttack_speed - a.attack_speed;
				printf("B 추가타!\n");
			}

			printf("A체력: %d, B체력: %d\n\n", a.health, b.health);
			i++;
		}
	}
}