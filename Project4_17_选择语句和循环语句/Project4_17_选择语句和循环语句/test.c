#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	//��дһ��ѡ�����
//	//�����ֵ
//	int input = 0;
//	//��ӡѡ��
//	printf("�Ƿ�ú�ѧϰ��1/0��\n");
//	//����ѡ��
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("���ϳɹ�");
//	}
//	else {
//		printf("����ʧ��");
//	}
//	return 0;
//}

//C����ʵ��ѭ�������ַ�ʽ whileѭ��  do...whileѭ��  forѭ��
//��дһ��whileѭ�����
int main() {
	int line = 1;
	while (line < 20) {
		printf("д����:%d\n",line);
		line++;
	}
	if (line >= 20) {
		printf("��С��\n");
	}
	else {
		printf("��������");
	}
	return 0;
}