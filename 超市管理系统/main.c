#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "shop.h"
int main() {
	int choice;
	printf(
		"**********************\n"
		"*                    *\n"
		"*    超市管理系统    *\n"
		"*   ByNowasiki v1.0  *\n"
		"*                    *\n"
		"**********************\n"
	);
	while (1) {
		showMenu();
		if((scanf("%d", &choice)) != 1) {
			printf("*Err:输入无效*\n请输入操作编号>");
			while(getchar() != '\n'); // 清除输入缓冲区
			continue;
		}
		switch (choice) {
		case 1:
			printf("建立库存信息\n");
			break;
		case 2:
			printf("显示库存信息\n");
			break;
		case 3:
			printf("购物车\n");
			break;
		case 4:
			printf("结算\n");
			break;
		case 0:
			printf("退出系统\n");
			return 0;
			break;
		default:
			printf("无效操作\n");
			break;
		}
	}
	return 0;
}