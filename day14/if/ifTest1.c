#include<stdio.h>
void main() {
	//�� ������ �Է¹ް� �� �� �� �ϱ� 

	int num1 = 0, num2 = 0;
	char* n1Msg = "ù��°���� : ";
	char* n2Msg = "�� ��° ����:";

	printf("%s", n1Msg);
	scanf_s("%d", &num1);

	printf("%s", n2Msg);
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("ū ��: %d", num1);
	}
	else if (num1 != num2) {		//num1 >num2 ���ǽ��� �����̹Ƿ� num1�� num2�� ���� �ʴٸ� num2�� ū ���̴�. 
		printf("ū ��: %d\n", num2);
	}
	else {
		printf("�� ���� �����ϴ�.");
	}



}