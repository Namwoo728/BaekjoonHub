#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
void printbar(int k) {
	for (int i = 0; i < k; i++)
		printf("____");
}
void printwithbar(char string[], int k) {
	printbar(k);
	printf("%s\n", string);
}
void r(int num) {
	int temp = n - num;
	if (num == n) {
		printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	}
	printwithbar("\"재귀함수가 뭔가요?\"", temp);
	if (num != 0) {
		printwithbar("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",temp);
		printwithbar("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",temp);
		printwithbar("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"",temp);
		r(num - 1);
	}
	else {
		printwithbar("\"재귀함수는 자기 자신을 호출하는 함수라네\"",temp);
	}
	
	printwithbar("라고 답변하였지.",temp);
}

int main() {
	scanf("%d", &n);
	r(n);
}