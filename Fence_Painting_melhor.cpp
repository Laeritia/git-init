#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,total,intersec;
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    cin>>a>>b>>c>>d;
    total=(b-a)+(d-c);
    intersec=max(min(b,d)-max(a,c),0);
    cout<<total-intersec;
    return 0;
}
