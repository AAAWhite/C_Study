#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	//编写一个选择语句
//	//定义初值
//	int input = 0;
//	//打印选项
//	printf("是否好好学习（1/0）\n");
//	//输入选项
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("走上成果");
//	}
//	else {
//		printf("走向失败");
//	}
//	return 0;
//}

//C语言实现循环的三种方式 while循环  do...while循环  for循环
//编写一个while循环语句
int main() {
	int line = 1;
	while (line < 20) {
		printf("写代码:%d\n",line);
		line++;
	}
	if (line >= 20) {
		printf("神功小成\n");
	}
	else {
		printf("继续加油");
	}
	return 0;
}