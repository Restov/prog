
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
 int temp=0; 
 for(int i = 1; i <= n; i++)
   {
      for(int j = 1; j <= i; j++)
      { 
        if(i % j == 0) temp++; 
      }        
 if(temp == 2) cout << i << " ";
 temp = 0; 
    } 
}
int main()
{
 int n;
 cin >> n;
 Func3(n);
}
