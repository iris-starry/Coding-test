//�������� ���Ͽ� 100��° �ױ��� ���� ���ϴ� �˰��� 2 + 6 + 18 + 54 
#include <stdio.h>
int main(){
	//a=�ʱⰪ, d=����, s=��, n=���� 
	double s; int r,a,n;
	r=3; a=2; s=a; n=2;
	
	while(n<=3){ 
		a = a * r;
		s = s + a;
		n = n + 1;
	} 
	printf("200��° ���ڱ����� ��:%d",s);
}
