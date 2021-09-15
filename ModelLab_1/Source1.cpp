#include "Header.h"
//������� ���������� ������� ���������� �������
void generation_massiv(int* mas,int a, int b, int sort, int kach, int size_mas) {
	srand(time(0));
	for (int i = 0; i < size_mas; i++)
	{
		mas[i] = a + rand() % (b - a + 1);
	}
}
void quicksort(int* a, int low, int high)
{
	int middle;
	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}
int split(int* a, int low, int high)
{
	int part_element = a[low];
	for (;;)
	{
		while (low < high && part_element <= a[high])
			high--;
		if (low >= high) break;
		a[low++] = a[high];
		while (low < high && a[low] <= part_element)
			low++;
		if (low >= high)break;
		a[high--] = a[low];
	}
	a[high] = part_element;
	return high;
}
void vstavka(int* mas, int size_mas, int pv) {
	if (pv == 0) {
		int obm = 0;
		int sr = 0;
		//���� �������� ����������� �������, �� ����� �������� �������� ��� �� ��� ������������
		if (size_mas < 10)
		{
			printf("\n������� ����������:");
		}
		for (int i = 1; i < size_mas; i++) {
			if (size_mas < 10) {
				printf("\n");
				for (int i = 0; i < size_mas; i++)
				{
					printf("%d ", mas[i]);
					if (i % 9 == 0)
						if (i != 0) {
							printf("\n");
						}
				}
			}
			for (int j = i; j > 0; j--) {
				sr++;
				if (mas[j - 1] > mas[j]) {
					obm++;
					int tmp = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = tmp;
				}
				else
					break;
			}
		}
		printf("\n��������������� ������\n");
		for (int i = 0; i < size_mas; i++)
		{
			printf("%d ", mas[i]);
			if (i % 9 == 0)
				if (i != 0) {
					printf("\n");
				}
		}
		//����� ���������� ���������, ������� � �����
		printf("\n���������� ���������:%d\n���������� �������:%d", sr, obm);
		printf("\n����� ��������:%d", sr + obm);
	}
	else
	{
		int obm = 0;
		int sr = 0;
		for (int i = 1; i < size_mas; i++) {
			for (int j = i; j > 0; j--) {
				sr++;
				if (mas[j - 1] > mas[j]) {
					obm++;
					int tmp = mas[j - 1];
					mas[j - 1] = mas[j];
					mas[j] = tmp;
				}
				else
					break;
			}
		}
		//����� ���������� ���������, ������� � �����
		printf("\n���������� �������� ��� ���������� ������ �������:\n���������:%d\n��������:%d\n����� ��������:%d", sr, obm, sr + obm);
	}
}
void sort_ubl(int* mas, int size_mas)
{
	int temp;
	for (int n = 0; n < size_mas; n++)
	{
		for (int i = 0; i < size_mas; i++)
		{
			if (mas[i] < mas[i + 1])
			{
				temp = mas[i + 1];
				mas[i + 1] = mas[i];
				mas[i] = temp;
}
		}
	}
}
void puzir(int* mas, int size_mas, int pv)
{
	if (pv == 0) {
		int obm = 0, sr = 0;
		//���� �������� ����������� �������, �� ����� �������� �������� ��� �� ��� ������������
		if (size_mas < 10)
		{
			printf("\n������� ����������:");
		}
		for (int i = 0; i < size_mas - 1; i++) {
			if (size_mas < 10) {
				printf("\n");
				for (int i = 0; i < size_mas; i++)
				{
					printf("%d ", mas[i]);
					if (i % 9 == 0)
						if (i != 0) {
							printf("\n");
						}
				}
			}
			// ���������� ��� �������� ��������.
			for (int j = 0; j < size_mas - i - 1; j++) {
				sr++;
				if (mas[j] > mas[j + 1]) {
					// ���� ��� ���� � ������������ �������, ��  
					//  ������ �� �������. 
					obm++;
					int tmp = mas[j];
					mas[j] = mas[j + 1];
					mas[j + 1] = tmp;
				}
			}
		}
		printf("\n��������������� ������\n");
		for (int i = 0; i < size_mas; i++)
		{
			printf("%d ", mas[i]);
			if (i % 9 == 0)
				if (i != 0) {
					printf("\n");
				}
		}
		//����� ���������� ���������, ������� � �����
		printf("\n���������� ���������:%d\n���������� �������:%d", sr, obm);
		printf("\n����� ��������:%d", sr + obm);
	}
	else
	{
		int obm = 0, sr = 0;
		for (int i = 0; i < size_mas - 1; i++) {
			// ���������� ��� �������� ��������.
			for (int j = 0; j < size_mas - i - 1; j++) {
				sr++;
				if (mas[j] > mas[j + 1]) {
					// ���� ��� ���� � ������������ �������, ��  
					//  ������ �� �������. 
					obm++;
					int tmp = mas[j];
					mas[j] = mas[j + 1];
					mas[j + 1] = tmp;
				}
			}
		}
		//����� ���������� ���������, ������� � �����
		printf("\n���������� �������� ��� ���������� ������ �������:\n���������:%d\n��������:%d\n����� ��������:%d", sr, obm, sr + obm);
	}
}