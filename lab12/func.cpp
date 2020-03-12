#include<bits/stdc++.h>
extern int n;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void BubbleSort(int n, int *a)
{
    int i, j;
    int c = 0, m = 0;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            ++c;
            if (a[j] > a[j + 1])
            {
                m += 3;
                swap(&a[j], &a[j + 1]);
            }
        }
}
void FillRand(int n, int *a)
{
    for (int i = 0; i < n; ++i)
    {
        a[i] = rand() % n;
    }
}
void PrintMas(int n, int *a)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << a[i] << " ";
    }
}
void ShakerSort(int m, int *a)
{
    int i, j, k;
    for (i = 0; i < m;)
    {
        for (j = i + 1; j < m; j++)
        {
            if (a[j] < a[j - 1])
            {
                swap(&a[j], &a[j - 1]);
            }
        }
        for (k = m - 1; k > i; k--)
        {
            if (a[k] < a[k - 1])
            {
                swap(&a[k], &a[k - 1]);
            }
        }
        i++;
    }
}
