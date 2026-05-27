/*점수 높은순서대로 정렬해보기*/
#include	<stdio.h>

int main(void) {
	int i, tem, temd, index;
	index = 5;

	int stop = 0;
	int b[5];						//정렬할것
	int d[5] = { 1,2,3,4,5 };		//학생번호

	printf("학생들의 점수를 차례로 입력하세요\n");

	for (i = 0;i < index;i++) {					//학생점수입력
		printf("학생 %d : ", i + 1);
		scanf("%d", b + i);
	}

	for (stop = 0;stop < index;stop++) {		//순서 재정렬하기
		for (i = 1;i < index;i++) {
			if (b[i] > b[i - 1]) {
				tem = b[i - 1];					//점수 스왑
				b[i - 1] = b[i];
				b[i] = tem;
				temd = d[i - 1];				//학생 번호 스왑		다 끝나고 알고보니 버블정렬 이란 게 있었는데 
				d[i - 1] = d[i];									  //난 그런건 배우지못해서 혼자 끙끙대며 머리로 아이디어 떠올렸음
				d[i] = temd;
			}
		}
												/*if (stop == index) { 초기에 떠올렸던 아이디어
														break;	}	   후에 보완하면서 삭제*/
		
	}
	printf("점수가 높은 순서대로 출력합니다\n");
	

	for (i = 0;i < index;i++) {
		printf("학생 %d: %d점\n", d[i], b[i]);
	}

		return 0;
}
