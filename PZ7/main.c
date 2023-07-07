#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <Windows.h>


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char input[50];
	int x1, y1, x2, y2, r1, r2;

	fgets(input, sizeof(input), stdin);
	sscanf_s(input, "%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &r1, &r2);
	double x = fabs(x1 - x2);
	double y = fabs(y1 - y2);
	double rad_len = r1 + r2;
	double result_len = sqrt(pow(x, 2) + pow(y, 2));
	int result = 0;
	if (result_len == rad_len) {
		result = 1;
	}
	if (result_len > rad_len) {
		result = 2;
	}
	if (result_len == 0) {
		if (r1 == r2) {
			printf("кількість точок перетину необмежена");
		}
		else {
			printf("%d\n", 0);
		}
		
	}
	else {
		printf("%d\n", result);
	}
	
	
	
}