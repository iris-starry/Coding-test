//���� �ٸ� �� �ڿ��� A, B�� �Է��Ͽ� A�� B���� �ڿ������� �հ� ���ϱ�
//�հ�� ���� ������ ū ���� 1�� ������Ű�� ���Ѵ�.
//a, b : ���� �Է� ���� n: �ݺ�ó�� ���� sum = �հ� ����
#include <stdio.h>
int main(){
	int a, b, n;
	int sum = 0;
	printf("a �Է� : ")
	scanf("%d",&a) 
	printf("b �Է� : ")
	scanf("%d",&b) 

	if(a>b){
		for(n = b; n<=a; n++){
			sum += n;
		}
		else{
			for(n = a; n<=b; n++){
				sum+=n;
			}
		}
	}
}
