#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int cont=0;

void recursao_maior(int a,int b,int c){
    int diff1,diff2;
    if(b-a==c-b&&c-b==1){
        return;
    }
    diff1=b-a;
    diff2=c-b;
    cont++;
    if(diff1>=diff2){
        recursao_maior(a,a+1,b);
    } else{
        recursao_maior(b,c-1,c);
    }
    return;
}

int main(){
    int a,b,c,x,y;
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    cin>>a>>b>>c;
    x=max({a,b,c});
    if(a==x){
        y=c;
        c=a;
        a=y;
        if(a>b){
            y=b;
            b=a;
            a=y;
        }
    }
    if(b==x){
        y=c;
        c=b;
        b=y;
        if(a>b){
            y=b;
            b=a;
            a=y;
        }
    }
    if(c==x){
        if(a>b){
            y=b;
            b=a;
            a=y;
        }
    }
    if(b-a==c-b&&c-b==1){
        cout<<0<<endl;
    } else{
        if(min(b-a,c-b)==2){
            cout<<1<<endl;
        } else{
            cout<<2<<endl;
        }
    }
    if(b-a==c-b&&c-b==1){
        cout<<0;
    } else{
        recursao_maior(a,b,c);
        cout<<cont;
    }
    return 0;
}
