//�Ǻ���ġ ������ ���Ͽ� 100��° �ױ����� ���� ���ϴ� �˰���
// 1+ 1+ 2+ 3+ 5+ 8+ 13 
//while
#include <stdio.h>
int main(){
	int A = 1, B=1, S = A+B;
	int N = 2, C;
		printf("�Ǻ���ġ���� = %d ",A);
		printf("%d ", A);
	while(1){
		C=A+B; S+=C; A=B; B=C;
		N++;
		printf("%d ", B);
		if(N==5) break;
	} 
	printf("\n �� = %d",S);
}
