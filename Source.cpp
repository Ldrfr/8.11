#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int swap = 0;
	int sr = 0;
	int n;
	printf("Enter quantity ");
	scanf_s("%d", &n);
	int* a = new int[n];
	for (int i = 0; i < n; ++i) scanf_s("%d", &a[i]);

	for (int i = 0; i < n - 1; ++i) {
		for (int j = n - 1; j > i; --j) {
			sr++;
			if (a[j - 1] > a[j]) {
				printf("%d %d\n", a[j - 1], a[j]);
				int t = a[j-1];
				a[j-1] = a[j];
				a[j] = t;
				swap++;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	printf("Сравнений ");
	printf("%d \n", sr);
	printf("Перестановок ");
	printf("%d", swap);
}