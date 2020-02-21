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
char *find(char *p, int &k)  
{                            
	char *q;
	for(*p != 0;p++;)      
		for(q=p+1; *q!=0;q++)
		{
			for(k=0;q[k]!=0 && p+k<q && p[k] == q[k];k++); 
				if(k>=2) return p;   
		}
		return 0;     
	}

int main()
{
	int sz,b=1;
	char *q;
	char *stroka;
	cin >> stroka;
	for(q=find(stroka,sz);
	q!=0;
	q=find(q+sz,sz))
	cout << b++ << " " << q << endl;                            
}