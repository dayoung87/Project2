//프로그램이 가지고 있는 정수를 사용자가 알아맞히는 게임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand((unsigned)time(NULL)); //난수 발생기 시드 설정
	int answer = rand() % 100; //정답을 난수로 발생
	int guess;
	int tries = 0;

	//반복 구조
	do {
		printf("정답을 추측하시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("추측 정수가 정답보다 높음\n\n");
		if (guess < answer)
			printf("추측 정수가 정답보다 낮음\n\n");
	} while (guess != answer);

	printf("축하합니다. 정답횟수= %d", tries);
	return 0;
}