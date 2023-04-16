#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//标准写法
//main函数是程序的入口，
//int main() {
//	printf("nice to meet you \n");
//		return 0;
//}
//不同数据类型所占字节
int main() {
	printf("cahr:%d\n", sizeof(char));
	printf("short:%d\n", sizeof(short));
	printf("int:%d\n", sizeof(int));
	printf("long:%d\n", sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));
	return 0;
}
