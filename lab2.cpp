#include <bits/stdc++.h>
using namespace std;
void Func1(){
  int x;
  cin >> x;
  if(x != 0){
      if(x>0){
          cout<<x<<" ";
          Func1();
      }
      else{
          Func1();
      }
  }
  else{
      return;
  }
}
void Func2(int a[], int n){
    if(n == 0){
        return;
    }
    if(a[n-1] < 0){
        cout << a[n-1] << " ";
        Func2(a,n-1);
    }
    else{
        Func2(a,n-1);
        cout << a[n-1]<< " ";
    }
    return;
}
void Func3(int x){
    int bin;
    if(x)
    {
        bin = x % 2;
        x = x / 2;
        Func3(x);
        cout << bin;
    }
    
}
int main(){
    Func1();
    cout << endl;
    int n,x;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;++i)
    {
        cin >> a[i];
    }
    Func2(a,n);
    cout << endl;
    cin >> x;
    Func3(x);
}