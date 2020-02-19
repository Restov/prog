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
int Func3(int n) 
{ 
 int a[n];
 for(int i = 0; i < n; i++)
 {
    a[i] = i;
 }
       a[1] = 0;
       for(int s = 2; s < n; s++)
       {
           if(a[s] != 0)
           {
               for(int j = s * 2; j < n; j+=s)
               {
                   a[j]=0;
               }
           }
       }
       for(int i = 0; i < n; i++)
       {
           if(a[i] != 0)
           {
                cout << a[i] << " ";
           }
       }
}
int main()
{
 int n;
 cin >> n;
 Func3(n);
}
