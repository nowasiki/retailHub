#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "shop.h"

void showMenu() {
	printf(
		"请选择操作：\n"
		"1. 建立库存信息\n"
		"2. 显示库存信息\n"
		"3. 购物车\n"
		"4. 结算\n"
		"0. 退出系统\n"
	);
	printf("请输入操作编号>");
}

int input() {
	int input = -1;
	if ((scanf("%d", &input)) != 1) {
		printf("*Err:输入无效*\n请输入操作编号>");
		while (getchar() != '\n'); // 清除输入缓冲区
		return -1;
	}
	return input;
}