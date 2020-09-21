#include <stdio.h>

int main(){
	int choice;

	makeChoice: // 여기로 복귀
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("새 게임.\n");
		break;
	case 2:
		printf("불러오기.\n");
		break;
	case 3:
		printf("설정.\n");
		break;
	case 4:
		printf("크레딧.\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		goto makeChoice; // makeChoice로 가라
		break;

		// goto를 자주 사용하면 스파게티 코드가 됨
		
// break를 하면 중괄호 밖으로 나갈 수 있음
// break가 없으면 case 1 -> case 2 순서대로 진행해버림
// 실수로 break걸지 않으면 안된다는 점!!
//
	}


}
