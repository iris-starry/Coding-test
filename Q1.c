#include <stdio.h>

int main(){
	int sum,n;
	sum=0; n=1;
	do{
		sum+=n;
		n++;
	}while(n<=100);

	printf("1���� 100�� �� : %d", sum);

}

