#include<stdio.h>

void main() {
	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB ";
	char* aMsg = "�Ĳ��ϰ� �����ϴ�";
	char* bMsg = "�������� ����";
	char* oMsg = "�米���� ����";
	char* abMsg = "���ϴ�";
	char* errorMsg = "�ٽ� �õ����ּ���";
	char* resultMsg = "";

	int choice = 0;

	if (choice == 1) {
		//�б�
		resultMsg = aMsg;
	}
	else if (choice == 2) {
		//�б�
		resultMsg = bMsg;
	}
	else if (choice == 3) {
		//�б�
		resultMsg = oMsg;
	}
	else if (choice == 4) {
		//�б�
		resultMsg = abMsg;
	}
	else {
		resultMsg = errorMsg;
	}
	//�ϰ�ó��
	printf("%s\n", resultMsg); 

}