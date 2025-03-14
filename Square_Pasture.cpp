#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int xbaixo,ybaixo,xcima,ycima,x1,y1,x2,y2,x3,y3,x4,y4,ladoquadrado;
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    xbaixo=min(x1,x3);
    ybaixo=min(y1,y3);
    xcima=max(x2,x4);
    ycima=max(y2,y4);
    ladoquadrado=max(ycima-ybaixo,xcima-xbaixo);
    cout<<pow(ladoquadrado,2);
}
