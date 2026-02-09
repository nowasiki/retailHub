#pragma once
void showMenu();
int input();

typedef struct Item {
	char name[50];
	char id[20];
	float in_price;
	float out_price;
	int num;
} Item;