#pragma once
void showMenu();
int input();

extern struct item {
	char name[50];
	char id[20];
	float in_price;
	float out_price;
	int num;
};