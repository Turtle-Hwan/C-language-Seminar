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
	
	srand(time(NULL));		//���� �õ� �ʱ�ȭ

	set_state(&A);
	set_state(&B);
	
	printf("ü��, ���ݷ�, ���ݼӵ�\n");
	printf("A: %d %d %f\n", A.health, A.power, A.attack_speed);
	printf("B: %d %d %f\n\n", B.health, B.power, B.attack_speed);

	fight_simul(A, B);
}

void set_state(struct _body *a) {
	a->health = 80 + rand() % 41;						//80~120 ������ ü��
	a->power = 5 + rand() % 11;							//5~15 ������ ���ݷ�
	a->attack_speed = 1.0 + (float) (rand() % 11) / 10;	//1.0~2.0 ������ ���ݼӵ�
}

void fight_simul(struct _body a, struct _body b) {
	float extraAttack_speed = 0;
	int i = 0;

	if (a.attack_speed >= b.attack_speed) {
		while (1) {
			if (b.health <= 0 || a.health <= 0) {			//�� �� �ϳ��� ü���� 0 ���ϸ� ��
				if (a.health <= 0 && b.health > 0)
					printf("B �¸�!");
				else if (b.health <= 0 && a.health > 0)
					printf("A �¸�!");
				else
					printf("���º�!");
				break;
			}

			b.health = b.health - a.power;
			a.health = a.health - b.power;

			printf("<%dȸ��>\n", i);

			extraAttack_speed = extraAttack_speed + a.attack_speed - b.attack_speed;	//���ݼӵ� ���̿� ���� �߰�Ÿ
			if (extraAttack_speed >= b.attack_speed) {
				b.health = b.health - a.power;
				extraAttack_speed = extraAttack_speed - b.attack_speed;
				printf("A �߰�Ÿ!\n");
			}

			printf("Aü��: %d, Bü��: %d\n\n", a.health, b.health);
			i++;
		}
	}
	else {
		while (1) {
			if (b.health <= 0 || a.health <= 0) {		//�� �� �ϳ��� ü���� 0 ���ϸ� ��
				if (a.health <= 0 && b.health > 0)
					printf("B �¸�!");
				else if (b.health <= 0 && a.health > 0)
					printf("A �¸�!");
				else
					printf("���º�!");
				break;
			}

			a.health = a.health - b.power;
			b.health = b.health - a.power;

			printf("<%dȸ��>\n", i);

			extraAttack_speed = extraAttack_speed + b.attack_speed - a.attack_speed;	//���ݼӵ� ���̿� ���� �߰�Ÿ
			if (extraAttack_speed >= a.attack_speed) {
				a.health = a.health - b.power;
				extraAttack_speed = extraAttack_speed - a.attack_speed;
				printf("B �߰�Ÿ!\n");
			}

			printf("Aü��: %d, Bü��: %d\n\n", a.health, b.health);
			i++;
		}
	}
}