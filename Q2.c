//���������� ���Ͽ� 200��° ���ڱ��� �� 2 + 8 + 14 + 20 + 26 
#include <stdio.h>
int main(){
	//a=�ʱⰪ, d=����, s=��, n=���� 
	int a,d,s,n,an;
	a=2; d=6, s=a; n=2; an=0;
	
	while(n<=200){
		an = a+(n-1)*d;
		s = s + an;
		n = n + 1;
	} 
	printf("200��° ���ڱ����� ��:%d",s);
}
