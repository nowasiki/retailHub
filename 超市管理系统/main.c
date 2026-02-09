#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "shop.h"
int main() {
	int choice;
	int num_items = 0;
	Item items[100] = { 0 }; // 假设最多有100种商品
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
		case 1: {
			//建立库存信息
			FILE* fp;
			if ((fp = fopen("items.txt", "w")) == NULL) {
				printf("*Err:无法打开文件*\n");
				return 1;
			}
			int ret;
			fflush(stdin); // 清除输入缓冲区
			printf("\n输入商品信息");

			printf("\n名字>");
			fflush(stdin);
			ret = scanf("%s", &(items[num_items].name));

			printf("编号>");
			fflush(stdin);
			ret = scanf("%s", &(items[num_items].id));

			printf("进价>");
			fflush(stdin);
			ret  = scanf("%f", &(items[num_items].in_price));

			printf("售价>");
			fflush(stdin);
			ret = scanf("%f", &(items[num_items].out_price));

			printf("数量>");
			fflush(stdin);
			ret = scanf("%d", &(items[num_items].num));
			printf("\n");

			num_items++;
			fwrite(items, sizeof(Item), num_items, fp);
			fclose(fp);
			fp = NULL;
			break;
		}
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