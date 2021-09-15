#ifndef HEADER_H_
#define HEADER_H_
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//функци€ заполнени€ массива случайными числами
void generation_massiv(int* mas,int a, int b, int sort, int kach, int size_mas);
/*‘ункци€ быстрой сортировки, ничего не возвращает.
а[] - параметр функции, принимает массив чисел(целых).
low - параметр функции, принимает целое число(нижн€€ граница).
high - параметр функции, принимает целое число(верхн€€ граница).
*/
void quicksort(int* a, int low, int high);
/*
ѕродолжение функции быстрой сортировки(разделение), возращает целое число(верхнюю границу).
а[]-параметр функции, принимает массив чисел(целых).
low-параметр функции, принимает целое число(нижн€€ граница).
high-параметр функции, принимает целое число(верхн€€ граница).
*/
int split(int* a, int low, int high);
//сортировка простой вставкой
void vstavka(int* mas, int size_mas, int pv);
//сортровка массива по убыванию
void sort_ubl(int* mas, int size_mas);
//сортировка методом пузырька
void puzir(int* mas, int size_masm, int pv);
#endif