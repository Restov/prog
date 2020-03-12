#include<bits/stdc++.h>
void swap(int *xp, int *yp);
void BubbleSort(int n, int *a);
void FillRand(int n, int *a);
void PrintMas(int n, int *a);
void timer(int ss, int n, int *a);
void ShakerSort(int m, int *a);
using namespace std;
int main()
{
    int n;
    int time;
    int *a = new int[n];
    cin >> n;
    FillRand(n, a);
    BubbleSort(n, a);
    PrintMas(n, a);
    cout << endl;
    FillRand(n, a);
    ShakerSort(n, a);
    PrintMas(n, a);
    cout << endl;
    // time = timer(BubbleSort, n, a);
}
