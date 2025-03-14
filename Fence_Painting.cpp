#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,flag=0;
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    cin>>a>>b>>c>>d;
    if((c<=a&&a<=d)&&d<=b){
        cout<<b-c;
        flag=1;
    }
    if((c<=b&&b<=d)&&(a<=c&&flag==0)){
        cout<<d-a;
    }
    if(a<c&&b>d){
        cout<<b-a;
    }
    if(c<a&&b<d){
        cout<<d-c;
    }
    if(b<c||d<a){
        cout<<b-a+d-c;
    }
    return 0;
}
