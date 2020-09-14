#include <stdio.h>

int main(){
	printf("동해물과 백두산이\n마르고\n닳도록\n");
	// 1 ~ 7 강
	// int: 32비트(4바이트), 정수를 담는 데 쓰임
	int a = 5;
	int b = 3;

	int hap = a + b;
	printf("%d + %d = %d\n", a, b, hap);

	int nameoji = a % b;

	printf("%d %% %d = %d\n", a, b, nameoji);

}

