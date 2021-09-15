#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//������� ���������� ������� ���������� �������
void generation_massiv(int* mas,int a, int b, int sort, int kach, int size_mas);
/*������� ������� ����������, ������ �� ����������.
�[] - �������� �������, ��������� ������ �����(�����).
low - �������� �������, ��������� ����� �����(������ �������).
high - �������� �������, ��������� ����� �����(������� �������).
*/
void quicksort(int* a, int low, int high);
/*
����������� ������� ������� ����������(����������), ��������� ����� �����(������� �������).
�[]-�������� �������, ��������� ������ �����(�����).
low-�������� �������, ��������� ����� �����(������ �������).
high-�������� �������, ��������� ����� �����(������� �������).
*/
int split(int* a, int low, int high);
//���������� ������� ��������
void vstavka(int* mas, int size_mas, int pv);
//��������� ������� �� ��������
void sort_ubl(int* mas, int size_mas);
//���������� ������� ��������
void puzir(int* mas, int size_masm, int pv);
#endif