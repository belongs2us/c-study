#include <stdio.h>

int main(void) {
	long long int a, b, c, d, n, tem, sum, lcm, gcd, r, x, y;
	tem = 0;
	sum = 0;

	printf("a부터 b까지의 정수 중 원하는 수의 배수의 총합을 구합니다\n 범위를 정할 두 정수를 입력하세요\n");
	printf("첫번째 정수 : ");
	scanf("%lld", &a);
	printf("두번째 정수 : ");
	scanf("%lld", &b);

	if (a > b) {
		tem = a;
		a = b;
		b = tem;
	}
	tem = 0;

	printf("%lld와 %lld 사이의 모든 정수 중에 원하는 배수 2개를 고릅니다\n", a, b);
	printf("첫번째 배수 : ");
	scanf("%lld", &c);
	printf("두번째 배수 : ");
	scanf("%lld", &d);
	
	x = c;
	y = d;
			
	//최대공약수 계산
	while (y != 0) {
		tem = x % y;
		x = y;
		y = tem;
	}
	gcd = x; //최대공약수
	lcm = 0;
	//최소공배수 계산 (오버플로우 방지)
	if (gcd != 0) {
		lcm = c / gcd * d;
	}
	if (lcm < 0) { lcm = -lcm; }

	for (n = a;n <= b;n++) {
		if (c != 0 && n % c == 0) {
				sum += n;
			}
		if (d != 0 && n % d == 0) {
				sum += n;
			}
		if (lcm != 0 && n % lcm == 0) {
				sum -= n;
		}
	}
	
	printf("%lld부터 %lld까지 %lld또는 %lld의 배수의 총합은 %lld", a, b, c, d, sum);
	return 0;
}