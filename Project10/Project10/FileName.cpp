//практическая работа №6, 1 задание "Сортировка пузурьковым методом"
#include <stdio.h>
#include <malloc.h>
#include <iomanip>
#include <stdlib.h>


int main() {
	int *a;
	int size;
	bool flag = false;
	system("chcp 1251");
	system("cls");
	printf("Введите размер массива: ");
	scanf_s("%d", &size);
	printf("Элементы неотсортированного массива :\n");
	a = (int*)malloc(size * sizeof(int)); // выделение динамической памяти для массива "a"
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100;              //заполнение массива случайными числами в цикл "for" 
		printf("%d ", a[i]);
	}
	while (!flag) {
		flag = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				std::swap(a[i], a[i + 1]);
				flag = false;
			}
		}	
	}
	printf("\nОтсортированный массив :\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	free(a);
	system("pause");
	return 0;
}