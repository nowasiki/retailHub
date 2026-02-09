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
		switch (input()) {
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
		case -1:
			printf("无效操作\n");
			break;
		}
	}
	return 0;
}