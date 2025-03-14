#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,y1,y2,a1,a2,b1,b2,c1,d1,c2,d2,total,intersec,intersec1,intersec2;
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    cin>>x1>>y1>>x2>>y2;
    cin>>a1>>b1>>a2>>b2;
    cin>>c1>>d1>>c2>>d2;
    total=(x2-x1)*(y2-y1)+(a2-a1)*(b2-b1);
    intersec1=max(min(x2,c2)-max(x1,c1),0)*max(min(y2,d2)-max(y1,d1),0);
    intersec2=max(min(a2,c2)-max(a1,c1),0)*max(min(b2,d2)-max(b1,d1),0);
    intersec=intersec1+intersec2;
    cout<<total-intersec;
    return 0;
    //olhar a solução da parte de retangulo da usaco, usa struct e funcao
}
