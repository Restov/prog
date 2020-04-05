/*
==========================================
 Title:  Lab9.1.
 Author: Bakhmann, Kremlyakova
 Date:   04.04.2020
========================================== */
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <nmmintrin.h>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
#include <cmath>
#include <climits>
#include <bitset>
#include <random>
#include <ctime>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <sstream>
using namespace std;
typedef struct student // структура студентов с фамилиями оценками и указателем
{
	char name[20];
	int marks[4];
	struct student *next; // ссылка не след элемент
} spis;
spis *create(void) // функция создания списка
{
	spis *p, *pred /* указатель на пред. структуру */, *h /* первая структура */;
	int n, d = 0;
	cout << "Num of students: \n";
	cin >> n;
	cout << "\n Enter " << n << " names: \n";
	h = pred = new spis; /* выделение памяти под 1 стр. */

	while (d < n)
	{
		p = new spis;
		cin >> p->name;
		for (int i = 0; i < 4; i++)
		{
			p->marks[i] = rand() % 4 + 2;
		}
		pred->next = p;
		pred = p;
		d++;
	}
	p->next = NULL;
	return h;
}

void list1(spis *head /* адрес "головы" списка */) // функция просмотра списка

{
	spis *p, *q, *t1, *t2;
	p = head;
	student *t;
	t = new student;
	t1 = new spis;
	t2 = new spis;
	bool i = true;

	while (i == true)
	{
		i = false;
		for (p = head; p->next->next; p = p->next)
		{
			t1 = p->next;
			t2 = t1->next;
			if (strcmp(t1->name, t2->name) > 0)
			{
				p->next = t2;
				t1->next = t2->next;
				t2->next = t1;
				i = true;
			}
		}
	}

	for (p = head->next; p; p = p->next)
	{
		cout << "Name: " << p->name;
		cout << "\n Marks: ";
		for (int i = 0; i < 4; i++)
			cout << p->marks[i];
		cout << endl;
	}
}

void free_spis(spis *head) // освобождение памяти
{
	spis *p, *q;
	q = p = head;
	while (p != NULL)
	{
		p = q->next;
		delete q;
		q = p;
	}
	head = NULL;
}
int main()
{
	spis *head;
	head = create();
	list1(head);
	free_spis(head);
}