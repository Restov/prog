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
int Func2(int n)
{
 srand(time(0));
 int *p, *c, *d, m=0, k=0,g=0,u=0;
 p = (int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; ++i)
        {
            p[i]= rand()%101-50;
            if(p[i]>0)
            ++m;
            if(p[i]<0)
            ++k;
        }
c = (int*) malloc(m*sizeof(int));
d = (int*) malloc(k*sizeof(int));
    for(int i = 0; i < n; ++i)
        {
            if(p[i] > 0)
            {
                c[g] = p[i];
                ++g;
            }
            if(p[i] < 0)
            {
                d[u] = p[i];
                ++u;
            }
        }
cout << "arr P = ";
    for(int i = 0; i < n; ++i)
        cout << p[i] << " ";
cout << endl << "arr '+'= ";
    for(int g = 0;g < m; ++g)
        cout << c[g] << " ";
    cout << endl << "arr '-'= ";
    for(int u=0;u<k;++u)
        cout << d[u] << " ";
free(p);
p = NULL;
free(c);
c = NULL;
free(d);
d = NULL;

}
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
 cout << endl;
 Func2(n);
}

   