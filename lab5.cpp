#include <bits/stdc++.h>
using namespace std;
void pervoe(int m, int k){
    int *a, l = 0, s = 0;
    a = new int [m];
    for(int i=0; i<m; ++i){
        a[i]= (rand()%100+10);
        cout << a[i] << " ";
    }
    if(m%k==0){
        s = m / k;
    }
    else{
        s = (m/k)+1;
    }
    int **b = new int*[m];
    for (int i = 0; i < m; ++i){
        b[i] = new int[s];
    }
    /*if(m%k==0){
    s = m / k;
    }
    else{
        s = (m/k)+1;
    }*/
    for(int i = 0; i < s; ++i){
        for (int j = 0; j < k; ++j){
            if(l < m ){
                b[i][j]=a[l];
                ++l;
            }
            else
                b[i][j]=0;
        }
    }
    cout << endl;
    for(int i = 0; i < s; ++i){
        for (int j = 0; j < k; ++j){
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout<< endl;
}
void UNO(int n){
   int **b = new int*[n];
   for (int i = 1; i < n+1; ++i){
    b[i] = new int[n];
}
for(int i = 1; i < n+1; ++i){
    for(int j = 1; j < i+1; ++j ){
       b[i][j]=i * j;
       cout << b[i][j] << " ";
   }
   cout<<endl;
   
}
}
int main(){
    srand(time(0));
    int m, k, n;
    cin >> m >> k;
    pervoe(m,k);
    cin >> n;
    UNO(n);
    return 0;
}


