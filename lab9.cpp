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
typedef struct st
{
    char data[20];
    struct st *next;
} spisok;
spisok *create(void);
void list(spisok *head);
void free_spis(spisok *head);

int main()
{
    spisok *head;
    head = create();
    list(head);
    free_spis(head);
}

spisok *create(void);
{
    spisok *p, *pred, *h;
    h = pred = new spisok;
    cout << pred -> data;
}
