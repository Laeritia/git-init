#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int c1,m1,c2,m2,c3,m3;
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    cin>>c1>>m1>>c2>>m2>>c3>>m3;
    if(c2>=m1+m2){
        m2=m1+m2;
        m1=0;
    } else {
        m1=m1+m2-c2;
        m2=c2;
    }
    for(int i=0;i<33;i++){
        if(c3>=m2+m3){
            m3=m2+m3;
            m2=0;
        } else {
            m2=m2+m3-c3;
            m3=c3;
        }
        if(c1>=m3+m1){
            m1=m1+m3;
            m3=0;
        } else {
            m3=m1+m3-c1;
            m1=c1;
        }
        if(c2>=m1+m2){
            m2=m1+m2;
            m1=0;
        } else {
            m1=m1+m2-c2;
            m2=c2;
        }
    }
    cout<<m1<<endl<<m2<<endl<<m3;
}
