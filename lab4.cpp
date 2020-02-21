
//many thanks to tryblyat7 for her contribution
#include <bits/stdc++.h>
using namespace std;
void pervoe(int m){
    int n = 5, ii, jj;
    int **b = new int*[n];
    for (int i = 0; i < n; ++i){
        b[i] = new int[m];
    }
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            b[i][j]=rand()%101-50;
        }
    }
    int max=b[0][0];
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if(b[i][j] > max){
                max = b[i][j];
                ii = i;
                jj = j;
            }
        }
    }
    cout << " MAX = "  << max<< " I= "<< ii<< " j= "<< jj<< endl;
    cout << "arr"<< endl;
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    cout<< endl;
    for(int i = ii; i < n-1; ++i){
        for (int j = 0; j < m; ++j){
            int temp = b[i][j];  
            b[i][j] = b[i+1][j];  
            b[i+1][j] = temp;
            
        }
    }
    for(int i = 0; i < n; ++i){
        for (int j = jj; j < m-1; ++j){
            int temp = b[i][j];  
            b[i][j] = b[i][j+1];  
            b[i][j+1] = temp;
            
        }
        
    }
    cout << " new arr"<< endl;
    for(int i = 0; i < n-1; ++i){
        for (int j = 0; j < m-1; ++j){
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i){
        delete[] b[i];
    }
    delete[] b;
}

void vtoroe(int M, int n) {
    int sum = 0, str = 0, st = 0;
    int **a = new int*[n];
    for (int i = 0; i < n; ++i){
        a[i] = new int[M];
    }
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < M; ++j){
            a[i][j]=rand()%101-50;
            sum+= a[i][j];
        }
    }
    cout <<"sum = "<< sum << endl << "arr"<< endl;
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < M; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout<< endl;
    int **d = new int*[n+1];
    for (int i = 0; i < n+1; ++i){
        d[i] = new int[M+1];
    }
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < M+1; ++j){
            if(j==M){
                d[i][j]=str;
            }
            else {
                d[i][j]=a[i][j];
                str+= d[i][j];
            }
        }
        str = 0;
    }
    for(int j = 0; j < M; ++j){
        for (int i = 0; i < n+1; ++i){
            if(i==n){
                d[i][j]=st;
            }
            else {
                st+= d[i][j];
            }
        }
        st = 0;
    }
    cout<< endl;
    cout << "new arr"<< endl;
    for(int i = 0; i < n+1; ++i){
        for (int j = 0; j < M+1; ++j){
            if(i==n&&j==M){
                d[i][j]=sum;
            }
            cout << d[i][j] << "\t";
        }
        cout << endl;
    }
    cout<< endl;
}
int main(){
    srand(time(0));
    int m, n, M;
    cin >> m;
    pervoe(m);
    cout << endl;
    cin >> M >> n;
    vtoroe(M,n);
}

