/*
==========================================
 Title:  Lab9.2.
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
    int mark1, mark2, mark3, mark4;
    struct student *prev;
    struct student *next;
} spis;

spis *create(void) // функция создания списка
{
    spis *p, *pred, *tail, *h;
    int N, k = 0;
    cout << "Enter num of students: ";
    cin >> N;
    h = pred = new spis;
    int s = 0;
    cout << "\nEnter name and 4 marks: " << endl;
    pred->next = p;

    while (k < N)
    {
        p = new spis;
        cin >> p->name >> p->mark1 >> p->mark2 >> p->mark3 >> p->mark4;
        pred->next = p;
        p->prev = pred;
        pred = p;
        k++;
    };
    cout << endl;
    pred->next = 0;
    p->next = NULL;
    return h;
}
void list1(spis *head) // функция просмотра списка
{
    spis *p;
    int s = 0;
    p = head->next;
    cout << endl
         << " Name and 4 marks: " << endl;
    while (p != NULL)
    {
        cout << p->name << " " << p->mark1 << " " << p->mark2 << " " << p->mark3 << " " << p->mark4 << endl;
        p = p->next;
    }
}
void free_spis(spis *head) // освобождение памяти
{
    spis *p, *r;
    r = p = head;
    while (p != NULL)
    {
        p = r->next;
        r = NULL;
        delete r;
        r = p;
    }
    head = NULL;
}
spis *otsort(spis *head) // сортировка списка
{
    int s = 0;
    spis *p, *r, *t;
    p = head->next;
    while (p != NULL)
    {
        if (p->mark1 < 3 || p->mark2 < 3 || p->mark3 < 3 || p->mark4 < 3)
        {
            if (p == head)
            {
                t = p;
                head = p->next;
                p = head;
                t = NULL;
                delete t;
            }
            if (p->next == 0)
            {
                t = p;
                p = p->prev;
                p->next = NULL;
                t = NULL;
                delete t;
            }
            else
            {
                t = p;
                p = p->prev;
                p->next = t->next;
                p = p->next;
                p->prev = t->prev;
                t = NULL;
                delete t;
            }
        }
        else
            p = p->next;
    }
    return head;
}
int main()
{
    spis *head;
    head = create();
    cout << endl
         << "Do sortirovki: " << endl;
    list1(head);
    otsort(head);
    cout << endl
         << "Posle sortirovki: " << endl;
    list1(head);
    free_spis(head);
    return 0;
}
