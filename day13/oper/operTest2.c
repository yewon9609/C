#include <stdio.h>
void main() {
	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB ";
	char* aMsg = "�Ĳ��ϰ� �����ϴ�";
	char* bMsg = "�������� ����";
	char* oMsg = "�米���� ����";
	char* abMsg = "���ϴ�";
	char* errorMsg = "�ٽ� �õ����ּ���";

	int condition1 = 0, condition2 = 0, condition3 = 0, condition4 = 0;
	int choice = 0;

	/*condition1 = choice == 1;
	condition2 = choice == 2;
	condition3 = choice == 3;
	condition4 = choice ==4;*/

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	printf("%s\n", choice == 1 ? aMsg :
		choice == 2 ? bMsg :
		choice == 3 ? oMsg :
		choice == 4 ? abMsg : errorMsg);


}