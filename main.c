#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	float i;	
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%f", &a);
	printf("�и� �Է��ϼ��� : ");
	scanf("%f", &b);
	
	i = (float)a/b;
	printf("�������� ����� %f\n", i);
	
	return 0;    
}
