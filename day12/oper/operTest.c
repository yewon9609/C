#include<stdio.h>
void main() {
	//�� ������ �Է��ϰ� ��� ���ϱ� 
	int num1 = 0, num2 = 0, result = 0;
	char* n1Msg = "ù��° ����: ";
	char* n2Msg = "�ι�° ����: ";

	int condition1 = 0, condition2 = 0;
	char* format = "";




	printf("%s", n1Msg);
	scanf_s("%d", &num1);

	printf("%s", n2Msg);
	scanf_s("%d", &num2);

	condition1 = num1 > num2;
	condition2 = num1 == num2;

	format = condition2 ? "%s" : "�� ū ��: %d";

	printf(format, condition1 ? num1 :
		condition2 ?"�� ���� �����ϴ�" : num2);


	/*num1 > num2 ? printf("�� ū��:%d\n", num1) :
		num1 == num2 ? printf("�� ���� �����ϴ�.") : printf("�� ū ��: %d", num2);*/

	//printf("%d %d\n", num1, num2);
	
	/*result = num1 > num2 ? num1 : num2;
	printf("�� ū �� : %d\n", result);*/














}


