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
int MaxEl (int **a, int n, int m)
{
    int max=a[0][0];
    int str = 0,stl = 0;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        if (max<a[i][j])
          {
            max=a[i][j];
            str=i+1;
            stl=j+1;
          }
        }
    }
    cout << endl << "__________________" << endl;
    cout << str << " " << stl << " " << max << endl;

}
int main()
{
    int m, n;
    srand(time(0));
    cin >> m;
    n = 5;
    int ** arr = new int*[m]; 
    for (int i = 0; i < m; i++) 
        arr[i] = new int[n]; 
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = rand() % 110 - 10;
        }
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
    MaxEl(arr,n,m);
    for (int i = 0; i < m; i++)
    delete arr[i];
    delete arr; 

}