#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

set <int> lista;
bool check[100];

int main(){
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        lista.insert(x);
    }
    cout<<lista.size();
    return 0;
}
