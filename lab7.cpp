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
void swap(int *xp, int *yp)  
{  
	int temp = *xp;  
  	*xp = *yp;  
  	*yp = temp;  
}

int Perebor(int n, int *a)
{int i, j, mina, M=0, C=0;  
  	for (i = 0; i < n-1; i++)  
  	{  
    	mina = i;  
    	for (j = i+1; j < n; j++)
		{
      		++C;
      		if (a[j] > a[mina])  
        	mina = j;
		}
 	if(mina!=i)
	 {
       M+=3;
       swap(a[mina], a[i]);
     }
   }
cout<<endl<<"C = "<< C << endl;
}

void PrintMas(int n,int *a) 
{
    for (int i = 0; i < n;++i)
    {
        cout << a[i]<<" ";
    }
}

void FillRand(int n,int *a) 
{
	for (int i = 0;i < n;++i)
    {
    	a[i] = rand() % n;
    
  	} 
}
int BinSearch(int n, int *a, int key)
{
    int middle,left,right;
    left = 0;
    right = n-1;
    while(left < right)
    {
        middle = (left+ right) /2;
        
        if (key > a[middle])
        {
            right = middle - 1;
            
        } else if (key < a[middle])
        {
            left = middle + 1;
            
        }
    }
    return middle;
}
void FillRand2(int n, int m) 
{
    int sum = 0;
 int **b = new int*[n];
    for (int i = 0; i < n; ++i)
        {
            b[i] = new int[m];
        }
    for(int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                b[i][j]=rand()%101;
            }
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j]<< " ";
        }
        
        cout << endl;
    }
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum+=b[i][j];
        }
        cout << endl << "sum = " << sum << " " ;
        sum = 0;
    }
    
}
int main()
{
    int n,m;
    int key;
    int *a = new int[n];
    cin >> n;
    cin >> key;
    FillRand(n,a);
    PrintMas(n,a);
    Perebor(n,a);
    PrintMas(n,a);
    cout << endl;
    cout << BinSearch(n,a,key);
    cin >> n >> m;
    cout << endl;
    FillRand2(n,m);
    
    
}