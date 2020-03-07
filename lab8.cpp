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
const int as = 3;
struct obshaga
{
    int kom; float area; string fac; int people;
};
struct school
{
    int name; float vipusk; float vuz; float prc;
};
void swap(int *xp, int *yp)  
{  
	int temp = *xp;  
  	*xp = *yp;  
  	*yp = temp;  
} 
void Q1()
{
    float m[as];
    school arr[as];
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i].name;
        cin >> arr[i].vipusk;
        cin >> arr[i].vuz;
        arr[i].prc =(arr[i].vuz/arr[i].vipusk)*100;
    }
    
    for (int i = 0; i < as-1; i++)   
    {
        for (int j = 0; j < as-i-1; j++) 
        {
            if (arr[j].prc > arr[j+1].prc)
            swap(arr[j], arr[j+1]);
        }
    }
    for (int i = 0; i < 3;++i)
    {
        cout << arr[i].name << endl;
        cout << arr[i].vipusk << endl;
        cout << arr[i].prc << endl;
    }
}
void Q2()
{
    float prc;
    int kolvo = 0, a = 0;
    float plosh[3];
    obshaga arr[3];
    for (int i = 0; i < 3; ++i)
    {
    	cout << "Nomer kom " << endl;
        cin >> arr[i].kom;
        cout << "Facultet " << endl;
        cin >> arr[i].fac;
        cout << "Kol-vo ludei " << endl;
        cin >> arr[i].people;
        cout << "Area " << endl;
        cin >> arr[i].area;
        cin.get();
        plosh[i] = (arr[i].area/arr[i].people);
    }
    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i].kom << " ";
        cout << arr[i].fac << " ";
        cout << arr[i].people << " ";
        cout << arr[i].area << " ";
        cout << plosh[i] << " ";
        cout << endl;
    }
 
}

int main()
{
	int n;
	cin >> n;
	switch(n)
	{
		case 1:
		{
			Q1();
			break;
		}
		case 2:
		{
			Q2();
			break;
		}
	}
}
