//���α׷��� ������ �ִ� ������ ����ڰ� �˾Ƹ����� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand((unsigned)time(NULL)); //���� �߻��� �õ� ����
	int answer = rand() % 100; //������ ������ �߻�
	int guess;
	int tries = 0;

	//�ݺ� ����
	do {
		printf("������ �����Ͻÿ�: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("���� ������ ���亸�� ����\n\n");
		if (guess < answer)
			printf("���� ������ ���亸�� ����\n\n");
	} while (guess != answer);

	printf("�����մϴ�. ����Ƚ��= %d", tries);
	return 0;
}